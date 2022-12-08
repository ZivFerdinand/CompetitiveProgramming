#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct movieTime{
    int hh;
    int mm;
};

struct movieData{
    char ID[100];
    char name[100];
    movieTime timeStart, timeEnd;
    int length;
    int studio;
};

movieData movies[100];
int moviesCount = 0;



void quickSort(int low, int high)
{
    if (low >= high)
        return;

    int i = low - 1;
    int j = low;
    int pivot = movies[high].length;

    while(j<high)
    {
        if(movies[j].length <= pivot)
        {
            i++;
            movieData temp = movies[j];
            movies[j] = movies[i];
            movies[i] = temp;
        }
        j++;
    }

    movieData temp = movies[++i];
    movies[i] = movies[high];
    movies[high] = temp;

    quickSort(low, i - 1);
    quickSort(i + 1, high);
}

int timeDiff(int firstHH, int firstMM, int secondHH, int secondMM)
{
    int cnt = 0;
    for (int i = firstHH; i <= secondHH;i++)
    {
        for (int j = firstMM; j < 60;j++)
        {
            if (i == secondHH && j == secondMM)
            {
                break;
            }
            cnt++;
            
        }
        firstMM = 0;
    }

    return cnt;
}

void readFile()
{
    FILE *myFile = fopen("cinema.csv", "r");
    char temp[1000] = {};

    if(myFile == NULL)
        return;

    fscanf(myFile, "%[^\0]", temp);
    if(strlen(temp) == 0)
        return;

    fclose(myFile);
    myFile = fopen("cinema.csv", "r");  

    while (!feof(myFile))
    {
        fscanf(myFile, "%[^,],%[^,],%d:%d,%d:%d,%d\n", movies[moviesCount].name, movies[moviesCount].ID, &movies[moviesCount].timeStart.hh, &movies[moviesCount].timeStart.mm, &movies[moviesCount].timeEnd.hh, &movies[moviesCount].timeEnd.mm, &movies[moviesCount].studio);
        movies[moviesCount].length = timeDiff(movies[moviesCount].timeStart.hh, movies[moviesCount].timeStart.mm, movies[moviesCount].timeEnd.hh, movies[moviesCount].timeEnd.mm);

        moviesCount++;
    }
    quickSort(0, moviesCount - 1);
    for (int i = 0; i < moviesCount;i++)
    {
        //printf("%s %s %d:%d %d:%d %d\n", movies[i].name, movies[i].ID, movies[i].timeStart.hh, movies[i].timeStart.mm, movies[i].timeEnd.hh, movies[i].timeEnd.mm, movies[i].studio);
        printf("%d\n", movies[i].length);
    }

    fclose(myFile);
}

void viewAll()
{
    if(moviesCount <= 0)
    {
        printf("Oops. No Movie Available!\nPress Enter to Continue...\n");
        return;
    }

    
}

void inpTime(int start, int i)
{
    int satisfied;
    int first = 1;
    char inp[500] = {};

    int hh, mm;
    do
    {
        if(!first)
        {
            printf("Invalid Time Format\n");
        }
        first = 0;
        satisfied = 1;
        int cntSemiColon = 0;
        int cntNumber = 0;
        printf("Enter Movie ");
        if(start)
            printf("Start Time [HH:MM]: ");
        else
            printf("End Time [HH:MM]: ");
        scanf("%[^\n]", inp);
        getchar();

        if(strlen(inp) != 5)
        {
            satisfied = 0;
            continue;
        }
        for (int i = 0; i < strlen(inp);i++)
        {
            if(inp[i] >= '0' && inp[i] <= '9')
                cntNumber++;
            if(inp[i] == ':')
            {
                if(i!=2)
                {
                    satisfied = 0;
                    break;
                }
                cntSemiColon++;
            }
        }

        satisfied = (cntNumber == 4) && (cntSemiColon == 1);

        hh = mm = 90;
        if(satisfied)
        {
            hh = atoi(inp);
            inp[0] = inp[1] = inp[2] = '0';
            mm = atoi(inp);

            satisfied = (hh < 24) && (mm < 60);
        }
    } while (!satisfied);

    if(start)
        movies[i].timeStart.hh = hh, movies[i].timeStart.mm = mm;
    else
        movies[i].timeEnd.hh = hh, movies[i].timeEnd.mm = mm;
}

int inpInt()
{
    int satisfied = 0;
    char rand[100] = {};
    do
    {
        satisfied = 1;
        scanf("%[^\n]", rand);
        getchar();
        for (int i = 0; i < strlen(rand);i++)
        {
            if(rand[i] <'0' && rand[i] > '9')
            {
                satisfied = 0;
                break;
            }
        }
    } while (!satisfied || strlen(rand) <= 0);

    return atoi(rand); 
}

void charInp(char rand[100])
{
    do
    {
        scanf("%[^\n]", rand);
        getchar();
    } while (strlen(rand) <= 0);
}

int intInp()
{
    char rand[100];
    int satisfied = 0;
    do
    {
        satisfied = 1;
        scanf("%[^\n]", rand);
        getchar();
        for (int i = 0; i < strlen(rand);i++)
        {
            if(rand[i] < '0' && rand[i] > '9')
            {
                satisfied = 0;
                break;
            }
        }
    } while (strlen(rand) <= 0 || !satisfied);

    return atoi(rand);
}

int main()
{
    // printf("%d\n",timeDiff(10, 45, 11, 50));
    readFile();
    int menu;

    do
    {
        system("cls");
        printf("Hi There!\n1. View All\n2. Add New\n3. Update\n4. Delete\n5. Save and Exit");
        do
        {
            printf("Input [1-5]: ");
            menu = inpInt();
        } while (menu < 1 || menu > 5);
        
        if(menu == 1)
        {

        }
    } while (true);
    
}