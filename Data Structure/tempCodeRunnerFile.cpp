    node *curr = myData[i]->head;
            while(curr)
            {
                printf("%s %s -- ", curr->name, curr->food);
                curr = curr->next;
            }