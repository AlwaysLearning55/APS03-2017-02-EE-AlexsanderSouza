#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

void GetValueInt(int* VarValue, char* VarName);

void GetValueFloat(float* VarValue, char* VarName);

void SobreTrabalho(int biblioteca, int linha);

void GetValueChar(char* VarValue, char* VarName);

void CheckError(int Error);

int CheckError2(int Error);

void PrintaResultMenu1(float x1, float y1, float x2, float y2, float D);

void PrintaResultMenu2(float r, float h, float i, float producao);

#endif // BIBLIO_H_INCLUDED
