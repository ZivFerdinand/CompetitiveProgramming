#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Song{
    char name[100];
    char artist[100];
    int duration;
};

struct Playlist{
    char name[100];
    int songCount;
    Song songList[100];
};
Playlist playlistList[50];
int playlistCount = 0;


int binarySearchPlaylist(char searchName[])
{
    if(playlistCount == 0)
        return -1;
    
    int left = 0;
    int right = playlistCount - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int compResult = strcmp(playlistList[mid].name, searchName);

        if(compResult == 0)
        {
            return mid;
        }
        else if(compResult > 0)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

void quickSortPlaylist(int low, int pivot)
{
    if (low == -1 || pivot == -1 || low == pivot)
        return;

    int i = low - 1;
    int j = low;
    char pivotChar[50], temp[50];

    strcpy(pivotChar, playlistList[pivot].name);
    while(j<pivot)
    {
        if(strcmp(playlistList[j].name, pivotChar) <= 0)
        {
            ++i;
            Playlist tempp = playlistList[j];
            playlistList[j] = playlistList[i];
            playlistList[i] = tempp;
        }
        j++;
    }

    i++;
    strcpy(playlistList[pivot].name, playlistList[i].name);
    strcpy(playlistList[i].name, pivotChar);

    quickSortPlaylist(low, i - 1);
    quickSortPlaylist(i, pivot);
}

void getDataFromFile()
{
    FILE *fd = fopen("songs.txt", "r");

    char currSongName[100], currSongArtist[100], currPlaylistName[100];
    int currSongDuration;
    while(!feof(fd))
    {
        fscanf(fd, "%[^#]#%[^#]#%d#%[^\n]\n", currSongName, currSongArtist, &currSongDuration, currPlaylistName);
        

        //printf("%s %s %d x%sx\n", currSongName, currSongArtist, currSongDuration, currPlaylistName);

        int searchResult = binarySearchPlaylist(currPlaylistName);
        if(searchResult == -1)
        {
            strcpy(playlistList[playlistCount].name, currPlaylistName);
            playlistList[playlistCount].songCount = 1;

            strcpy(playlistList[playlistCount].songList[0].name, currSongName);
            strcpy(playlistList[playlistCount].songList[0].artist, currSongArtist);
            playlistList[playlistCount].songList[0].duration = currSongDuration;

            playlistCount++;
            quickSortPlaylist(0, playlistCount - 1);
        }
        else
        {
            //printf("Search Index: %d\n", searchResult);

            int lastSongIndexOfPlaylist = playlistList[searchResult].songCount;

            strcpy(playlistList[searchResult].songList[lastSongIndexOfPlaylist].name, currSongName);
            strcpy(playlistList[searchResult].songList[lastSongIndexOfPlaylist].artist, currSongArtist);
            playlistList[searchResult].songList[lastSongIndexOfPlaylist].duration = currSongDuration;

            playlistList[searchResult].songCount++;
        }
    }   
    fclose(fd);
}


int main()
{
    getDataFromFile();
    for (int i = 0; i < playlistCount; i++)
    {
        printf("%s Playlist\n", playlistList[i].name);
        for (int j = 0; j < playlistList[i].songCount;j++)
        {
            printf("\t%s %s %d\n", playlistList[i].songList[j].name, playlistList[i].songList[j].artist, playlistList[i].songList[j].duration);
        }
        printf("\n");
    }

    char myTemp[50];
    while(true)
    {
        scanf("%s", myTemp);
        printf("x%sx\n", myTemp);
        getchar();

        for (int i = 0; i < playlistCount; i++)
        {
            bool ans = false;
            if(strstr(playlistList[i].name, myTemp))
            {
                ans = true;
                printf("%s Playlist\n", playlistList[i].name);
            }

            for (int j = 0; j < playlistList[i].songCount;j++)
            {
                bool ans2 = false;
                if(strstr(playlistList[i].songList[j].name,myTemp))
                {
                    ans2 = true;
                }
                else if(strstr( playlistList[i].songList[j].artist,myTemp))
                {
                    ans2 = true;
                }

                if(ans2)
                {
                    if(!ans)
                    {
                       printf("%s Playlist\n", playlistList[i].name);
                       ans = true;
                    }
                    printf("\t%s %s %d\n", playlistList[i].songList[j].name, playlistList[i].songList[j].artist, playlistList[i].songList[j].duration);
                }
            }
        }
    }
}
