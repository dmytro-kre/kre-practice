extern int buf[]; // external symbol

int* pBuf = &buf[0];

static float age;

static int* secondElement; // local symbol

int calc(int a, int b){ // global symbol
    return a +b;
}

void work(){
    age = 23;
}



void swap(){ //global symbol
    int temp; // ignored by linker
    secondElement = &pBuf[1];

    temp = *pBuf;

    *pBuf = *secondElement;

    *secondElement = temp;


}