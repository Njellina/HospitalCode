#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int option;
char Name[20];
char Birth[20];
char Age[100];
char Add[100];
int Status;
char Diag[20];
char Med[20];
int price;
void menu();

struct node{ 
    char PatientName[20];
    char PatientAge[100];
    char PatientBirth[20];
    char PatientAdd[100];
    int PatientStatus;
    char PatientDia[20];
    char PatientMed[20];
    int Price;
    struct node *next;

}*front = NULL, *rear = NULL;
 
//------------------------------------DENTIST
int klee = 0;
struct node *frontKlee = NULL;
struct node *rearKlee = NULL;
int diona = 0;
struct node *frontDiona = NULL;
struct node *rearDiona = NULL;
//------------------------------------CHILDREN
int ayaka = 0;
struct node *frontAyaka = NULL;
struct node *rearAyaka = NULL;
int ayato = 0;
struct node *frontAyato = NULL;
struct node *rearAyato = NULL;
//------------------------------------HEALTH
int qiqi = 0;
struct node *frontQiqi = NULL;
struct node *rearQiqi = NULL;
int hutao = 0;
struct node *frontHutao = NULL;
struct node *rearHutao = NULL;
//------------------------------------PSYCHOLOGY
int venti = 0;
struct node *frontVenti = NULL;
struct node *rearVenti = NULL;
int lisa = 0;
struct node *frontLisa = NULL;
struct node *rearLisa = NULL;
//------------------------------------PHARMACY
int phar = 0;
struct node *frontphar = NULL;
struct node *rearphar = NULL;
//------------------------------------DRUG
int drugs = 0;
struct node *frontdrug = NULL;
struct node *reardrug = NULL;
//------------------------------------PAYMENT
int pay = 0;
struct node *frontpay = NULL;
struct node *rearpay = NULL;


void *createNewNode(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    strcpy(newNode->PatientName, PatientName); 
    strcpy(newNode->PatientBirth, PatientBirth); 
    strcpy(newNode->PatientAge, PatientAge); 
    strcpy(newNode->PatientAdd, PatientAdd); 
    newNode->PatientStatus = Status; 
    newNode->next = NULL;
    return newNode;
}

void *createNewNode1(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus, char PatientDia[], char PatientMed[], int prices){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    strcpy(newNode->PatientName, PatientName); 
    strcpy(newNode->PatientAge, PatientAge);
    strcpy(newNode->PatientBirth, PatientBirth);  
    strcpy(newNode->PatientAdd, PatientAdd); 
    newNode->PatientStatus = Status;
    strcpy(newNode->PatientDia, PatientDia); 
    strcpy(newNode->PatientMed, PatientMed);  
    newNode->Price = price;
    newNode->next = NULL;
    return newNode;
}

void Drug(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus, char PatientDia[], char PatientMed[], int Price){
    struct node *newNode = createNewNode1(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus, PatientDia, PatientMed, Price);
    drugs += 1;
    if(frontdrug == NULL){
        frontdrug = reardrug = newNode;
    }
    else{
        reardrug->next = newNode;
        reardrug = newNode; 
    }
    puts("DATA UPDATED");
}

void pharmacy(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus, char PatientDia[], char PatientMed[], int Price){
    struct node *newNode = createNewNode1(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus, PatientDia, PatientMed, Price);
    phar += 1;
    if(frontphar == NULL){
        frontphar = rearphar = newNode;
    }
    else{
        rearphar->next = newNode;
        rearphar = newNode; 
    }
    puts("DATA UPDATED");
}

void payment(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus, char PatientDia[], char PatientMed[], int Price){
    struct node *newNode = createNewNode1(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus, PatientDia, PatientMed, Price);
    pay += 1;
    if(frontpay == NULL){
        frontpay = rearpay = newNode;
    }
    else{
        rearpay->next = newNode;
        rearpay = newNode; 
    }
    puts("DATA UPDATED");
}

void KleeReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    klee += 1;
    if(frontKlee == NULL){
        frontKlee = rearKlee = newNode;
    }
    else{
        rearKlee->next = newNode;
        rearKlee = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void DionaReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    diona += 1;
    if(frontDiona == NULL){
        frontDiona = rearDiona = newNode;
    }
    else{
        rearDiona->next = newNode;
        rearDiona = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void AyakaReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    ayaka += 1;
    if(frontAyaka == NULL){
        frontAyaka = rearAyaka = newNode;
    }
    else{
        rearAyaka->next = newNode;
        rearAyaka = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void AyatoReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    ayato += 1;
    if(frontAyato == NULL){
        frontAyato = rearAyato = newNode;
    }
    else{
        rearAyato->next = newNode;
        rearAyato = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void QiqiReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    qiqi += 1;
    if(frontQiqi == NULL){
        frontQiqi = rearQiqi = newNode;
    }
    else{
        rearQiqi->next = newNode;
        rearQiqi = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void HuReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    hutao += 1;
    if(frontHutao == NULL){
        frontHutao = rearHutao = newNode;
    }
    else{
        rearHutao->next = newNode;
        rearHutao = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void VentiReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    venti += 1;
    if(frontVenti == NULL){
        frontVenti = rearVenti = newNode;
    }
    else{
        rearVenti->next = newNode;
        rearVenti = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void LisaReg(char PatientName[], char PatientAge[], char PatientBirth[], char PatientAdd[], int PatientStatus){
    struct node *newNode = createNewNode(PatientName, PatientAge, PatientBirth, PatientAdd, PatientStatus);
    lisa += 1;
    if(frontLisa == NULL){
        frontLisa = rearLisa = newNode;
    }
    else{
        rearLisa->next = newNode;
        rearLisa = newNode; 
    }
    puts("DATA UPDATED");
    menu();
}

void printklee(){
    puts("Dr. Klee queue");
    if(frontKlee != NULL){
        int queue = 1;
        struct node *curr = frontKlee;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printdiona(){
    puts("Dr. Diona queue");
    if(frontDiona != NULL){
        int queue = 1;
        struct node *curr = frontDiona;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printayaka(){
    puts("Dr. Ayaka queue");
    if(frontAyaka != NULL){
        int queue = 1;
        struct node *curr = frontAyaka;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printayato(){
    puts("Dr. Ayato queue");
    if(frontAyato != NULL){
        int queue = 1;
        struct node *curr = frontAyato;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printqiqi(){
    puts("Dr. Qiqi queue");
    if(frontQiqi != NULL){
        int queue = 1;
        struct node *curr = frontQiqi;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printhu(){
    puts("Dr. HuTao queue");
    if(frontHutao != NULL){
        int queue = 1;
        struct node *curr = frontHutao;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printventi(){
    puts("Dr. Venti queue");
    if(frontVenti != NULL){
        int queue = 1;
        struct node *curr = frontVenti;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printlisa(){
    puts("Dr. Lisa queue");
    if(frontLisa != NULL){
        int queue = 1;
        struct node *curr = frontLisa;
        while(curr != NULL){   
            printf("%d. %s\n", queue, curr->PatientName);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
}

void printphar(){
    puts("Pharmacy current queue");
    if(frontphar != NULL){
        int queue = 1;
        struct node *curr = frontphar;
        while(curr != NULL){   
            puts("---------------------------------");
            printf("NUMBER %d\n", queue);
            printf("Name: %s\n", curr->PatientName);
            printf("Medication: %s\n", curr->PatientMed);
            printf("Total Price: Rp. %d\n", curr->Price);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
    menu();
}

void printdrug(){
    puts("---------------------------------");
    puts("Drug's current queue");
    if(frontdrug != NULL){
        int queue = 1;
        struct node *curr = frontdrug;
        while(curr != NULL){   
            printf("NUMBER: %d\n", queue);
            printf("Name: %s\n", curr->PatientName);
            printf("Medication: %s\n", curr->PatientMed);
            printf("Total Price: Rp. %d\n", curr->Price);
            curr = curr->next;
            queue += 1;
        }
    }
    else{
        printf("NULL\n");
    }
    puts("---------------------------------");
    menu();
}

void DeKlee(){
    if(frontKlee != NULL){
        klee -= 1;
        printf("Patient's name: %s\n", frontKlee->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontKlee->PatientDia, Diag);  
        strcpy(frontKlee->PatientMed, Med);  
        frontKlee->Price = price;

        if(!frontKlee){
            printf("Data not found\n");
        }
        else if(frontKlee == rearKlee){
            pharmacy(frontKlee->PatientName, frontKlee->PatientAge, frontKlee->PatientBirth, frontKlee->PatientAdd, frontKlee->PatientStatus, frontKlee->PatientDia, frontKlee->PatientMed, frontKlee->Price);
            free(frontKlee);
            frontKlee = rearKlee = NULL;
        }
        else{
            struct node *temp = frontKlee->next;
            pharmacy(frontKlee->PatientName, frontKlee->PatientAge, frontKlee->PatientBirth, frontKlee->PatientAdd, frontKlee->PatientStatus, frontKlee->PatientDia, frontKlee->PatientMed, frontKlee->Price);
            frontKlee->next = NULL;
            free(frontKlee);
            frontKlee = temp;
        }
        
        printf("Dr. Klee patient remains %d\n", klee);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DeDiona(){
    if(frontDiona != NULL){
        diona -= 1;
        printf("Patient's name: %s\n", frontDiona->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontDiona->PatientDia, Diag);  
        strcpy(frontDiona->PatientMed, Med);  
        frontDiona->Price = price;

        if(!frontDiona){
            printf("Data not found\n");
        }
        else if(frontDiona == rearDiona){
            pharmacy(frontDiona->PatientName, frontDiona->PatientAge, frontDiona->PatientBirth, frontDiona->PatientAdd, frontDiona->PatientStatus, frontDiona->PatientDia, frontDiona->PatientMed, frontDiona->Price);
            free(frontDiona);
            frontDiona = rearDiona = NULL;
        }
        else{
            struct node *temp = frontDiona->next;
            pharmacy(frontDiona->PatientName, frontDiona->PatientAge, frontDiona->PatientBirth, frontDiona->PatientAdd, frontDiona->PatientStatus, frontDiona->PatientDia, frontDiona->PatientMed, frontDiona->Price);
            frontDiona->next = NULL;
            free(frontDiona);
            frontDiona = temp;
        }
        
        printf("Dr. Diona patient remains %d\n", diona);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DeAyaka(){
    if(frontAyaka != NULL){
        ayaka -= 1;
        printf("Patient's name: %s\n", frontAyaka->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontAyaka->PatientDia, Diag);  
        strcpy(frontAyaka->PatientMed, Med);  
        frontAyaka->Price = price;

        if(!frontAyaka){
            printf("Data not found\n");
        }
        else if(frontAyaka == rearAyaka){
            pharmacy(frontAyaka->PatientName, frontAyaka->PatientAge, frontAyaka->PatientBirth, frontAyaka->PatientAdd, frontAyaka->PatientStatus, frontAyaka->PatientDia, frontAyaka->PatientMed, frontAyaka->Price);
            free(frontAyaka);
            frontAyaka = rearAyaka = NULL;
        }
        else{
            struct node *temp = frontAyaka->next;
            pharmacy(frontAyaka->PatientName, frontAyaka->PatientAge, frontAyaka->PatientBirth, frontAyaka->PatientAdd, frontAyaka->PatientStatus, frontAyaka->PatientDia, frontAyaka->PatientMed, frontAyaka->Price);
            frontAyaka->next = NULL;
            free(frontAyaka);
            frontAyaka = temp;
        }
        
        printf("Dr. Ayaka patient remains %d\n", ayaka);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DeAyato(){
    if(frontAyato != NULL){
        ayato -= 1;
        printf("Patient's name: %s\n", frontAyato->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontAyato->PatientDia, Diag);  
        strcpy(frontAyato->PatientMed, Med);  
        frontAyato->Price = price;

        if(!frontAyato){
            printf("Data not found\n");
        }
        else if(frontAyato == rearAyato){
            pharmacy(frontAyato->PatientName, frontAyato->PatientAge, frontAyato->PatientBirth, frontAyato->PatientAdd, frontAyato->PatientStatus, frontAyato->PatientDia, frontAyato->PatientMed, frontAyato->Price);
            free(frontAyato);
            frontAyato = rearAyato = NULL;
        }
        else{
            struct node *temp = frontAyato->next;
            pharmacy(frontAyato->PatientName, frontAyato->PatientAge, frontAyato->PatientBirth, frontAyato->PatientAdd, frontAyato->PatientStatus, frontAyato->PatientDia, frontAyato->PatientMed, frontAyato->Price);
            frontAyato->next = NULL;
            free(frontAyato);
            frontAyato = temp;
        }
        
        printf("Dr. Ayato patient remains %d\n", ayato);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DeQiqi(){
    if(frontQiqi != NULL){
        qiqi -= 1;
        printf("Patient's name: %s\n", frontQiqi->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontQiqi->PatientDia, Diag);  
        strcpy(frontQiqi->PatientMed, Med);  
        frontQiqi->Price = price;

        if(!frontQiqi){
            printf("Data not found\n");
        }
        else if(frontQiqi == rearQiqi){
            pharmacy(frontQiqi->PatientName, frontQiqi->PatientAge, frontQiqi->PatientBirth, frontQiqi->PatientAdd, frontQiqi->PatientStatus, frontQiqi->PatientDia, frontQiqi->PatientMed, frontQiqi->Price);
            free(frontQiqi);
            frontQiqi = rearQiqi = NULL;
        }
        else{
            struct node *temp = frontQiqi->next;
            pharmacy(frontQiqi->PatientName, frontQiqi->PatientAge, frontQiqi->PatientBirth, frontQiqi->PatientAdd, frontQiqi->PatientStatus, frontQiqi->PatientDia, frontQiqi->PatientMed, frontQiqi->Price);
            frontQiqi->next = NULL;
            free(frontQiqi);
            frontQiqi = temp;
        }
        
        printf("Dr. Qiqi patient remains %d\n", qiqi);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DeHu(){
    if(frontHutao != NULL){
        hutao -= 1;
        printf("Patient's name: %s\n", frontHutao->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontHutao->PatientDia, Diag);  
        strcpy(frontHutao->PatientMed, Med);  
        frontHutao->Price = price;

        if(!frontHutao){
            printf("Data not found\n");
        }
        else if(frontHutao == rearHutao){
            pharmacy(frontHutao->PatientName, frontHutao->PatientAge, frontHutao->PatientBirth, frontHutao->PatientAdd, frontHutao->PatientStatus, frontHutao->PatientDia, frontHutao->PatientMed, frontHutao->Price);
            free(frontHutao);
            frontHutao = rearHutao = NULL;
        }
        else{
            struct node *temp = frontHutao->next;
            pharmacy(frontHutao->PatientName, frontHutao->PatientAge, frontHutao->PatientBirth, frontHutao->PatientAdd, frontHutao->PatientStatus, frontHutao->PatientDia, frontHutao->PatientMed, frontHutao->Price);
            frontHutao->next = NULL;
            free(frontHutao);
            frontHutao = temp;
        }
        
        printf("Dr. HuTao patient remains %d\n", hutao);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DeVenti(){
    if(frontVenti != NULL){
        venti -= 1;
        printf("Patient's name: %s\n", frontVenti->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontVenti->PatientDia, Diag);  
        strcpy(frontVenti->PatientMed, Med);  
        frontVenti->Price = price;

        if(!frontVenti){
            printf("Data not found\n");
        }
        else if(frontVenti == rearVenti){
            pharmacy(frontVenti->PatientName, frontVenti->PatientAge, frontVenti->PatientBirth, frontVenti->PatientAdd, frontVenti->PatientStatus, frontVenti->PatientDia, frontVenti->PatientMed, frontVenti->Price);
            free(frontAyato);
            frontAyato = rearAyato = NULL;
        }
        else{
            struct node *temp = frontVenti->next;
            pharmacy(frontVenti->PatientName, frontVenti->PatientAge, frontVenti->PatientBirth, frontVenti->PatientAdd, frontVenti->PatientStatus, frontVenti->PatientDia, frontVenti->PatientMed, frontVenti->Price);
            frontVenti->next = NULL;
            free(frontVenti);
            frontVenti = temp;
        }
        
        printf("Dr. Venti patient remains %d\n", venti);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DeLisa(){
    if(frontLisa != NULL){
        lisa -= 1;
        printf("Patient's name: %s\n", frontLisa->PatientName);
        printf("Patient's diagnosis: ");
        scanf("%s", Diag);
        printf("Patient's medication: ");
        scanf("%s", Med);
        printf("Medication price: ");
        scanf("%d", &price);
        strcpy(frontLisa->PatientDia, Diag);  
        strcpy(frontLisa->PatientMed, Med);  
        frontLisa->Price = price;

        if(!frontLisa){
            printf("Data not found\n");
        }
        else if(frontLisa == rearLisa){
            pharmacy(frontLisa->PatientName, frontLisa->PatientAge, frontLisa->PatientBirth, frontLisa->PatientAdd, frontLisa->PatientStatus, frontLisa->PatientDia, frontLisa->PatientMed, frontLisa->Price);
            free(frontLisa);
            frontLisa = rearLisa = NULL;
        }
        else{
            struct node *temp = frontLisa->next;
            pharmacy(frontLisa->PatientName, frontLisa->PatientAge, frontLisa->PatientBirth, frontLisa->PatientAdd, frontLisa->PatientStatus, frontLisa->PatientDia, frontLisa->PatientMed, frontLisa->Price);
            frontLisa->next = NULL;
            free(frontLisa);
            frontLisa = temp;
        }
        
        printf("Dr. Lisa patient remains %d\n", lisa);
        menu();
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }
}

void DePhar(){
    if(frontphar != NULL){
        phar -= 1;
        if(!frontphar){
            printf("Data not found\n");
        }
        else if(frontphar == rearphar){
            Drug(frontphar->PatientName, frontphar->PatientAge, frontphar->PatientBirth, frontphar->PatientAdd, frontphar->PatientStatus, frontphar->PatientDia, frontphar->PatientMed, frontphar->Price);
            free(frontphar);
            frontphar = rearphar = NULL;
        }
        else{
            struct node *temp = frontphar->next;
            Drug(frontphar->PatientName, frontphar->PatientAge, frontphar->PatientBirth, frontphar->PatientAdd, frontphar->PatientStatus, frontphar->PatientDia, frontphar->PatientMed, frontphar->Price);
            frontphar->next = NULL;
            free(frontphar);
            frontphar = temp;
        }
        printf("Pharmacy queue remains %d\n", phar);
    }
    else{
        printf("There are no queue remains\n");
    
    }

}

void DeDrug(){
    if(frontdrug != NULL){
        drugs -= 1; 

        if(!frontdrug){
            printf("Data not found\n");
        }
        else if(frontdrug == reardrug){
            payment(frontdrug->PatientName, frontdrug->PatientAge, frontdrug->PatientBirth, frontdrug->PatientAdd, frontdrug->PatientStatus, frontdrug->PatientDia, frontdrug->PatientMed, frontdrug->Price);
            free(frontdrug);
            frontdrug = reardrug = NULL;
        }
        else{
            struct node *temp = frontdrug->next;
            payment(frontdrug->PatientName, frontdrug->PatientAge, frontdrug->PatientBirth, frontdrug->PatientAdd, frontdrug->PatientStatus, frontdrug->PatientDia, frontdrug->PatientMed, frontdrug->Price);
            free(frontdrug);
            frontdrug = temp;
        }
        
        printf("Drug process remains %d\n", drugs);
    }
    else{
        printf("There are no patient remains\n");
        menu();
    }

}

void DrList(){
    puts("---------------------------------");
    puts("List of Clinic:");
    puts("1. Dentist");
    puts("2. Children");
    puts("3. Health");
    puts("4. Psychology");
    puts("---------------------------------");
    printf("Number: ");
    scanf("%d", &option);
    switch(option){
        case 1:{
            puts("---------------------------------");
            puts("Here are some available doctor:");
            puts("1. Dr. Klee");
            puts("2. Dr. Diona");
            puts("---------------------------------");
            puts("Do you want to see another clinic?");
            puts("1. Yes");
            puts("2. No, return to main menu");
            scanf("%d", &option);
                if(option == 1){
                    DrList();
                }
                else{
                    menu();
                }
                getchar();
            }
        case 2:{
            puts("---------------------------------");
            puts("Here are some available doctor:");
            puts("1. Dr. Ayaka");
            puts("2. Dr. Ayato");
            puts("---------------------------------");
            puts("Do you want to see another clinic?");
            puts("1. Yes");
            puts("2. No, return to main menu");
            scanf("%d", &option);
                if(option == 1){
                    DrList();
                }
                else{
                    menu();
                }
                getchar();
                }
        case 3:{
            puts("---------------------------------");
            puts("Here are some available doctor:");
            puts("1. Dr. Qiqi");
            puts("2. Dr. HuTao");
            puts("---------------------------------");
            puts("Do you want to see another clinic?");
            puts("1. Yes");
            puts("2. No, return to main menu");
            scanf("%d", &option);
                if(option == 1){
                    DrList();
                }
                else{
                    menu();
                }
                getchar();
                }
        case 4:{
            puts("---------------------------------");
            puts("Here are some available doctor:");
            puts("1. Dr. Venti");
            puts("2. Dr. Lisa");
            puts("---------------------------------");
            puts("Do you want to see another clinic?");
            puts("1. Yes");
            puts("2. No, return to main menu");
            scanf("%d", &option);
                if(option == 1){
                    DrList();
                }
                else{
                    menu();
                }
                getchar();
                }
    } 
}

void Regist(){
    printf("Please input patient's name: ");
    scanf("%s", Name);
    printf("Please input patient's age: ");
    scanf("%s", Age);
    printf("Please input patient's date of birth (dd-mm-yy): ");
    scanf("%s", Birth);
    printf("Please input patient's address: ");
    scanf("%s", Add);
    printf("Please input patient's status: \n");
    puts("1. BPJS");
    puts("2. InHealth");
    puts("3. Mandiri");
    scanf("%d", &Status);
    puts("Please choose the clinic: ");
    puts("1. Dentist");
    puts("2. Children");
    puts("3. Health");
    puts("4. Psychology");
    printf("Number: ");
    scanf("%d", &option);
    puts("Please choose your doctor:");
    switch(option){
        case 1:{
            printf("1. Dr. Klee, queue = %d\n", klee);
            printf("2. Dr. Diona, queue = %d\n", diona);
            scanf("%d", &option);
            if(option == 1){
                KleeReg(Name, Age, Birth, Add, Status);
            }
            else{
                DionaReg(Name, Age, Birth, Add, Status);
            }
            getchar();
        }
        case 2:{
            printf("1. Dr. Ayaka, queue = %d\n", ayaka);
            printf("2. Dr. Ayato, queue = %d\n", ayato);
            scanf("%d", &option);
            if(option == 1){
                AyakaReg(Name, Age, Birth, Add, Status);
            }
            else{
                AyatoReg(Name, Age, Birth, Add, Status);
            }
            getchar();
        }
        case 3:{
            printf("1. Dr. Qiqi, queue = %d\n", qiqi);
            printf("2. Dr. HuTao, queue = %d\n", hutao);
            scanf("%d", &option);
            if(option == 1){
                QiqiReg(Name, Age, Birth, Add, Status);
            }
            else{
                HuReg(Name, Age, Birth, Add, Status);
            }
            getchar();
        }
        case 4:{
            printf("1. Dr. Venti, queue = %d\n", venti);
            printf("2. Dr. Lisa, queue = %d\n", lisa);
            scanf("%d", &option);
            if(option == 1){
                VentiReg(Name, Age, Birth, Add, Status);
            }
            else{
                LisaReg(Name, Age, Birth, Add, Status);
            }
            getchar();
        }
    }
}

void ClinicQue(){
    puts("---------------------------------");
    puts("This is our current clinic queue:");
    puts("---------------------------------");
    printklee();
    printdiona();
    printayaka();
    printayato();
    printqiqi();
    printhu();
    printventi();
    printlisa();
    puts("Return to main menu please press 1");
    scanf("%d", &option);
    if(option == 1){
        menu();
    }
    else{
        ClinicQue();
    }  
}

void OutPat(){
    puts("---------------------------------");
    puts("Whose patient has been examined?");
    puts("1. Dr. Klee");
    puts("2. Dr. Diona");
    puts("3. Dr. Ayaka");
    puts("4. Dr. Ayato");
    puts("5. Dr. Qiqi");
    puts("6. Dr. HuTao");
    puts("7. Dr. Venti");
    puts("8. Dr. Lisa");
    printf("Number: ");
    scanf("%d", &option);
    switch(option){
        case 1:{
            DeKlee();
            getchar();
        }
        case 2:{
            DeDiona();
            getchar();
        }
        case 3:{
            DeAyaka();
            getchar();
        }
        case 4:{
            DeAyato();
            getchar();
        }
        case 5:{
            DeQiqi();
            getchar();
        }
        case 6:{
            DeHu();
            getchar();
        }
        case 7:{
            DeVenti();
            getchar();
        }
        case 8:{
            DeLisa();
            getchar();
        }
    }
}

void DrugQue(){
    DePhar();
    getchar();
    printdrug();
    getchar();
}

void write(){
    FILE *fp = fopen("patientdata.txt", "a");

    if(frontpay != NULL){
        struct node *curr = frontpay;
        while(curr != NULL){   
            fprintf(fp,"---------------------------------\n");
            fprintf(fp,"Name: %s\n", curr->PatientName);
            fprintf(fp,"Age: %s\n", curr->PatientAge);
            fprintf(fp,"Birth: %s\n", curr->PatientBirth);
            fprintf(fp,"Address: %s\n", curr->PatientAdd);
            fprintf(fp,"Diagnose: %s\n", curr->PatientDia);
            fprintf(fp,"Medication: %s\n", curr->PatientMed);
            fprintf(fp,"Total: ");
            
            if(curr->PatientStatus == 1){
                fprintf(fp,"The costs are covered by insurance\n");
            }
            else if(curr->PatientStatus == 2){
                fprintf(fp,"The costs are covered by insurance\n");
            }
            else if(curr->PatientStatus == 3){
                fprintf(fp,"Rp. %d\n", curr->Price);
            }
            fprintf(fp,"---------------------------------\n");
            curr = curr->next;
        }
    }
    else{
        fprintf(fp,"NULL\n");
    }

    fclose(fp);
	printf("Patient data stored!\n");

}

void paymentSort(){
    DeDrug();
    puts("---------------------------------");
    puts("Payment process");

    if(frontpay != NULL){
        int queue = 1;
        struct node *curr = frontpay;
        while(curr != NULL){
            printf("NUMBER: %d\n", queue);
            printf("Patient's name: %s\n", curr->PatientName);
            printf("Total cost: ");

            if(curr->PatientStatus == 1){
                printf("The costs are covered by insurance\n");
            }
            else if(curr->PatientStatus == 2){
                printf("The costs are covered by insurance\n");
            }
            else if(curr->PatientStatus == 3){
                printf("Rp. %d\n", curr->Price);
            }

            curr = curr->next;
            queue += 1;
        }
    }
    else{
        puts("NULL");
    }
    write();
    puts("---------------------------------");
    menu();
}

void menu(){
    puts("---------------------------------");
    puts("|       CLINIC MAIN MENU        |");
    puts("---------------------------------");
    puts("PLEASE SELECT OPTION BELOW:    ");
    puts("1. List of doctors             ");
    puts("2. Registration                ");
    puts("3. Current clinic queue        ");
    puts("4. Outpatient                  ");
    puts("5. Pharmacy queue              ");
    puts("6. Drug taken                  ");
    puts("7. Payment                     ");
    puts("8. Exit                        ");
    puts("---------------------------------");
    printf("Select option number: ");
    scanf("%d", &option);

    switch(option){
        case 1:{
            DrList();
            getchar();
        }
        case 2:{
            Regist();
            getchar();
        }
        case 3:{
            ClinicQue();
            getchar();
        }
        case 4:{
            OutPat();
            getchar();
        }
        case 5:{
            printphar();
            getchar();
        }
        case 6:{
            DrugQue();
            getchar();
        }
        case 7:{
            paymentSort();
            getchar();
        }
        
    }while(option < 8);
    puts("---------------------------------");
    puts("           THANK YOU             ");
    puts("   ANGELINA QUINCY - 2501968994  ");
    puts("---------------------------------");
    exit(1);
}

int main(){
    menu();
}