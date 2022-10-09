// back+1=front (back+1)%size=front ......Queue is full
// front=back=-1 ....Queue is empty

#include<stdio.h>

int main(){
    int CQueue[20];
    int front, back, size, ch, data, n;
    front=back=-1;
    printf("Enter size of Queue(max 20) ");
    scanf("%d", &size);
    CQueue[size-1];

    do
    {
        printf("Which operation do you want to perform 1.Insertion 2.delet 3.display ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (front==-1&&back==-1){
                printf("Enter new element ");
                scanf("%d", &data);
                front++;
                back=(back+1)%size;
                CQueue[back]=data;
                break;
            }
            else if ((back+1)%size==front){
                printf("Queue is full");
            }
            else{
                printf("Enter new element ");
                scanf("%d", &data);
                back=(back+1)%size;
                CQueue[back]=data;
                break;
            }
            break;
        case 2:
            if (front==-1){
                printf("Queue is empty");
            }
            else if (front==back)
            {
                printf("deleted element is %d", CQueue[front]);
                front=-1;
                back=-1;
                break;
            }
            else{
                printf("deleted element is %d", CQueue[front]);
                front=(front+1)%size;
            break;
            }
            break;
        case 3:
            if (front==-1){
                printf("Queue is empty");
            }
            else{
                if(front<=back){
                for (int i=front; i <= back; i++)
                {
                    printf("%d ", CQueue[i]);
                    
                    
                }
                }
                else if (back<front)
                {
                    
                }
                
                // front=(front+1)%size;
                break;
            }   
                

            break;
        default:
            printf("Wrong choise");
            break;
        }

    printf("\nIf you want to continue press 1");
    scanf("%d", &n);
    } while (n==1);
    
    return 0;
}