﻿// 2023.4.6,1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

int main()
{
    int nArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int nArray2[10] = { 0, };

    for (int i = 0; i < 10; i++)
        nArray[i] = i + 1;

    int nDArray[10][5] = {
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5 }
    };

    int nDArray2[10][5] = { { 0, } };

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            nDArray[i][j] = (j + 1) + i * 5;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << nDArray[i][j] << ", ";
        }
    }

    /* 
    단일 for문으로

    for (int i = 0; i < 50; i++)
        nDArray[i / 5][i % 5] = (i % 5 + 1) + i / 5 * 5;

    */

    // 별 찍기
    /*
    *****   -----   *****   -****   ****-   -----   *****
    *****   *****   *****   -****   ****-   -***-   *---*
    *****   *****   *****   -****   ****-   -***-   *---*
    *****   *****   *****   -****   ****-   -***-   *---*
    *****   *****   -----   -****   ****-   -----   *****
    */

    /*
    *----   ----*   *****   *****
    **---   ---**   -****   ****-
    ***--   --***   --***   ***--
    ****-   -****   ---**   **---
    *****   *****   ----*   *----
    */
    
    /*
    char szStar[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0)
                szStar[i][j] = '-';
            else
                szStar[i][j] = '*';
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << szStar[i][j];
    }
    */

    char szStar[4][5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i >= j)
                szStar[0][i][j] = '*';
            else
                szStar[0][i][j] = '-';
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i >= j)
                szStar[1][i][4 - j] = '*';
            else
                szStar[1][i][4 - j] = '-';
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i <= 4 - j)
                szStar[2][i][4 - j] = '*';
            else
                szStar[2][i][4 - j] = '-';
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i <= 4 - j)
                szStar[3][i][j] = '*';
            else
                szStar[3][i][j] = '-';
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << szStar[i][j][k];
            }
            cout << endl;
        }
        cout << "====================" << endl;
    }



    // 숙제 : 1중 for문으로 만들어보기

    system("pause");

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
