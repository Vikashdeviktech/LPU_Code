void movezero(int arr[],int 5){
int count=0;

for(int i=0;i<5;i++)
if(arr[i]!=0)
arr[count++]=arr[i];

while(count<5)
arr[count++]=0;
}
void printElement(int arr[],int 5){
for(int i=0;i<5;i++)
cout<<arr[i]<<" ";
}
int main(){
int arr[5]={0,2,0,0,1};

movezero(arr,5);
printElement(arr,5);

}