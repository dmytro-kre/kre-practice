int buf[2] = {1, 2}; // global symbol // external symbol

int* pBuf = &buf[0]; // global symbol



static int* secondElement; // local symbol

int calc(int a, int b){ // global symbol
    return a +b;
}



void swap(){ //global symbol
    int temp; // ignored by linker
    secondElement = &pBuf[1];

    temp = *pBuf;

    *pBuf = *secondElement;

    *secondElement = temp;


}