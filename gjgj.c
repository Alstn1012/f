#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

int main()
{
    char key;
    PlaySound(TEXT("wave_file.wav"), NULL, SND_ASYNC | SND_LOOP);
    
    while (1)
    {
        printf("  �����Ϸ��� �ƹ� Ű�� �Է��ϼ���!  ");
        key = _getch();

        if (key != 0)
        {
            PlaySound(NULL, 0, 0);
            printf("\n  ���� ����� �����մϴ�.");
            Sleep(2000);
            return 0;  // return 0; �Ǵ� exit(0);�� ����Ͽ� ���α׷��� �����ؾ� �մϴ�.
        }
    }
    return 0;
}
