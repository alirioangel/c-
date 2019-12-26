#include <iostream>
#include <stdlib.h>
using namespace std;

char ChoosePlayerMark();
void ShowTable(char tableGame[3][3]);
bool CheckWin(char tableGame[3][3]);
void fillTable(char tableGame[3][3], int inputPlayer, char playerMark);
void IAMove(char tableGame[3][3], char playerMark);
void playerMove(char tableGame[3][3], char playerMark);

int main()
{
  string nameHero = " ";
  bool isGameOver = false;
  char playerMark = ' ';
  char tableGame[3][3] = {
      {' ', ' ', ' '},
      {' ', ' ', ' '},
      {' ', ' ', ' '}};
  cout << "Este es un programa demo para trabajar con C++ en VSCode"
       << endl;
  cout << "Aprovecharemos de hacer un juego simple." << endl;
  cout << "Juguemos la vieja." << endl;
  cout << "ingresa tu nombre: " << endl;
  cin >> nameHero;
  cout << "bienvenido " << nameHero << endl;
  playerMark = ChoosePlayerMark();
  ShowTable(tableGame);
  while (isGameOver == false)
  {
    playerMove(tableGame, playerMark);
    ShowTable(tableGame);
    IAMove(tableGame, playerMark);
    ShowTable(tableGame);
    isGameOver = CheckWin(tableGame);
  }

  return 0;
}
char ChoosePlayerMark()
{
  char playerMark = ' ';
  cout << "¿Que letra quieres ser \"X\" ó \"O\" ?" << endl;
  cin >> playerMark;
  playerMark = toupper(playerMark);
  switch (playerMark)
  {
  case 'X':
    playerMark = 'X';
    cout << "escogiste X" << endl;
    return playerMark;
    break;
  case 'O':
    cout << "escogiste O" << endl;
    playerMark = 'O';
    return playerMark;
    break;
  default:
    cout << "no escogiste correctamente por lo que te asignaremos la X " << endl;
    return 'X';
    break;
  }
}
void ShowTable(char tableGame[3][3])
{

  for (int i = 0; i < 3; i++)
  {
    cout << i + 1 << " | ";
    for (int j = 0; j < 3; j++)
    {
      cout << tableGame[i][j] << " | ";
    }

    cout << endl;
  }
}
bool CheckWin(char tableGame[3][3])
{

  if (tableGame[0][0] == tableGame[1][1] && tableGame[0][0] == tableGame[2][2] && tableGame[0][0] != ' ')
  {
    cout << "Gano " << tableGame[0][0] << endl;
    return true;
  }
  else if (tableGame[0][0] == tableGame[0][1] && tableGame[0][0] == tableGame[0][2] && tableGame[0][0] != ' ')
  {
    cout << "Gano " << tableGame[0][0] << endl;
    return true;
  }
  else if (tableGame[1][0] == tableGame[1][1] && tableGame[1][0] == tableGame[1][2] && tableGame[1][0] != ' ')
  {
    cout << "Gano " << tableGame[1][0] << endl;
    return true;
  }
  else if (tableGame[2][0] == tableGame[2][1] && tableGame[2][0] == tableGame[2][2] && tableGame[2][0] != ' ')
  {
    cout << "Gano " << tableGame[2][0] << endl;
    return true;
  }
  else if (tableGame[0][0] == tableGame[1][0] && tableGame[0][0] == tableGame[2][0] && tableGame[0][0] != ' ')
  {
    cout << "Gano " << tableGame[0][0] << endl;
    return true;
  }
  else if (tableGame[0][1] == tableGame[1][1] && tableGame[0][1] == tableGame[2][1] && tableGame[0][1] != ' ')
  {
    cout << "Gano " << tableGame[0][1] << endl;
    return true;
  }
  else if (tableGame[0][2] == tableGame[1][2] && tableGame[0][2] == tableGame[2][2] && tableGame[0][2] != ' ')
  {
    cout << "Gano " << tableGame[0][2] << endl;
    return true;
  }
  else
  {
    return false;
  }
}
void fillTable(char tableGame[3][3], int input, char mark, bool isPlayer)
{
  switch (input)
  {
  case 1:
    if (tableGame[0][0] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[0][0] = mark;
      break;
    }

  case 2:
    if (tableGame[0][1] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[0][1] = mark;
      break;
    }

  case 3:
    if (tableGame[0][2] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[0][2] = mark;
      break;
    }

  case 4:
    if (tableGame[1][0] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[1][0] = mark;
      break;
    }

  case 5:
    if (tableGame[1][1] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[1][1] = mark;
      break;
    }

  case 6:
    if (tableGame[1][2] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[1][2] = mark;
      break;
    }

  case 7:
    if (tableGame[2][0] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[2][0] = mark;
      break;
    }

  case 8:
    if (tableGame[2][1] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[2][1] = mark;
      break;
    }

  case 9:
    if (tableGame[2][2] != ' ')
    {
      if (isPlayer == true)
      {
        cout << "Por favor selecciona otra casilla, esta ya ha sido rellenada" << endl;
        playerMove(tableGame, mark);
        break;
      }
      else
      {
        IAMove(tableGame, mark);
        break;
      }
    }
    else
    {

      tableGame[2][2] = mark;
      break;
    }

  default:
    cout << " escogiste un valor invalido" << endl;
    break;
  }
}
void IAMove(char tableGame[3][3], char playerMark)
{
  int IANumber = rand() % 9 + 1;
  char IAMark = ' ';
  if (playerMark == 'X')
  {
    IAMark = 'O';
  }
  else
  {
    IAMark = 'X';
  }
  fillTable(tableGame, IANumber, IAMark, false);
}
void playerMove(char tableGame[3][3], char playerMark)
{
  int input = 0;
  cout << "ingrese un valor del 1-9" << endl;
  cin >> input;
  if (input < 1 || input > 9)
  {
    cout << "ingrese un valor valido, ingrese un valor del 1-9" << endl;
    cin >> input;
  }
  fillTable(tableGame, input, playerMark, true);
}

/*
 cout << " <>=======()" << endl;
  cout << "(/\\___   /|\\          ()==========<>_" << endl;
  cout << "      \\_/ | \\        //|\\   ______/ \\)" << endl;
  cout << "        \\_|  \\      // | \\_/" << endl;
  cout << "           (oo)\\ \\_//  /" << endl;
  cout << "          //_/\\_\\/ /  |" << endl;
  cout << "         @@/  |=\\  \\  |" << endl;
  cout << "              \\_=\\_ \\ |" << endl;
  cout << "                \\==\\ \\|\\_" << endl;
  cout << "             __(\\===\\(  )\\ " << endl;
  cout << "            (((~) __(_/   |" << endl;
  cout << "                 (((~) \\  /" << endl;
  cout << "                 ______/ /" << endl;
  cout << "                 '------'" << endl;


 */

/*

  float pi = 3.1416f;
  int r = 5;
  int k = 4;

  cout << "Figura 1: " << (pi * r * r) << endl;     // endpoint: Figura 1: 78.54
  cout << "Figura 2: " << (k * pi * r * r) << endl; // endpoint: Figura 2: 314.16
*/
/*
  int a, b, amasb, amenosb, aporb;
  float aentreb;
  cout << "probando operadores" << endl;
  cout << "ingrese los 2 valores" << endl;
  cin >> a >> b;
  amasb = a + b;
  amenosb = a - b;
  aporb = a * b;
  aentreb = a / b;

  cout << "la matriz quedaria: " << endl;
  cout << amasb << " - " << amenosb;
  cout << " - " << aporb;
  cout << " - " << aentreb << endl;

  cout << amenosb << " - " << aporb;
  cout << " - " << aentreb;
  cout << " - " << amasb << endl;

  cout << aporb << " - " << aentreb;
  cout << " - " << amasb;
  cout << " - " << amenosb << endl;

  cout << aentreb << " - " << amasb;
  cout << " - " << amenosb;
  cout << " - " << aporb << endl;
*/