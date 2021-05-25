using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.Animations;
using System.IO;
using SFB;
using System;

namespace Calculator
{
    
    public class Token
    {
        double num1,num2;
        char op;

        public void initialize(double a, char b, double c) 
        {
            num1 = a; 
            op = b; 
            num2 = c; 
            return;
        }
        public double solve()
        {
            double result = 0;
            switch(op)
            {
                case '+' :
                    result = (num1 + num2);
                    break;
                case '-' :
                    result = (num1 - num2);
                    break;
                case '*' :
                    result = (num1 * num2);
                    break;
                case '/' :
                    result = (num1 / num2);
                    break;
            }

            return result;
        }
    }
    public class MainCalculation
    {
        static string expression;
        static List<double> numbers = new List<double>();
        static List<char> operators = new List<char>();

        [MenuItem("ZivFerdinand/Calculator")]
        public static void main()
        {
            expression = "5 * 5 + 2 * 80";
            express(expression);
            extract();
            calculate();

            Debug.Log("Answer: " + numbers[0]);
        }
        private static void express(string deletedSpaces) // Remove Space Found In String
        {
            for (int i = 0; i < deletedSpaces.Length; i++)
            {
                if (deletedSpaces[i] == 32)
                {
                    deletedSpaces = deletedSpaces.Remove(i, 1); i--;
                }
            }

            List<int> openingBracket = new List<int>();
            List<int> closingBracket = new List<int>();
            for (int i = 0; i < deletedSpaces.Length;i++)
            {
                if(deletedSpaces[i]=='(')
                    openingBracket.Add(i);
                else if(deletedSpaces[i]==')')
                    closingBracket.Add(i);
            }

            if(openingBracket.Count!=closingBracket.Count)
            {
                Debug.LogError("Formula Format Is Wrong");
            }
            else
            {
                for (int i = openingBracket.Count - 1; i >= 0;i--)
                {
                    // 5 * 2 + ( 3 * ( 5 * ( 2 + 2 ) * 3 ) )
                    // Substring(openingBracket[openingBracket.Count - 1], closingBracket[0]);
                    // Extract(^);

                    // deletedSpaces = deletedSpaces.Replace( substringdiatas , hasilextract.ToString() );
                    #region updateBracketList
                    openingBracket.Clear();
                    closingBracket.Clear();
                    for (int j = 0; j < deletedSpaces.Length; j++)
                    {
                        if(deletedSpaces[i]=='(')
                            openingBracket.Add(i);
                        else if(deletedSpaces[i]==')')
                            closingBracket.Add(i);
                    }

                    #endregion
                }
            }
            // extract(deletedSpaces);
            return;
        }
        private static void extract() //Turns an expression into a list of numbers and operators.
        {
            List<int> digits = new List<int>();
            uint i,k; 
            int temp=0;

            for (i = 0; i <= expression.Length; i++)
            {
                bool addNumber = false;
                if (i < expression.Length)
                {
                    if(expression[(int)i] >= '0' && expression[(int)i] <= '9')
                        digits.Add(expression[(int)i] - 48);
                    else
                        addNumber = true;
                }
                if(addNumber || i == expression.Length)
                {
                    if (i < expression.Length)
                        operators.Add(expression[(int)i]);

                    for (k = 0; k < digits.Count; k++)
                    {
                        int count = 1;
                        for (int x = 0; x < digits.Count - 1 - k; x++)
                            count *= 10;
                        temp += digits[(int)k] * count;
                    }
                    numbers.Add(temp);
                    //Debug.Log(temp);
                    digits.Clear();
                    temp = 0;
                    addNumber = false;
                }
            }
            return;
        }

        private static void addsub() //Does adding and subtracting.
        {
            Token tempp = new Token();
            double temp = numbers[0];
            while (true)
            {
                if (operators[0] == '+' || operators[0] == '-')
                {
                    numbers.RemoveAt(0);
                    tempp.initialize(temp ,operators[0], numbers[0]);
                    temp = tempp.solve();

                    if (operators.Count == 1)
                    {
                        operators.Clear();
                        numbers[0] = temp;
                        return;
                    }

                    else
                        operators.RemoveAt(0);
                }
            }
        }
        private static void multidiv() //Does multiplication and division.
        {
            Token tempp = new Token();
            double temp;
            uint i;
            //Debug.Log(operators[0] + " " + operators[1] + " " + operators[2]);
            for (i = 0; i < operators.Count; i++)
            {
                if (operators[(int)i] == '*' || operators[(int)i] == '/')
                {
                    tempp.initialize(numbers[(int)i], operators[(int)i], numbers[(int) i + 1]);
                    temp = tempp.solve();
                    if (operators.Count == 1)
                    {
                        operators.Clear();
                        numbers[0] = temp;
                        return;
                    }

                    else
                    {
                        operators.RemoveAt((int)i);
                        numbers.RemoveAt((int)i + 1);
                        numbers[(int)i] = temp;
                    }
                    --i;
                }
            }
            addsub();
        }
        private static void calculate() //Does powers and roots.
        {
            multidiv();
        }

    }
}