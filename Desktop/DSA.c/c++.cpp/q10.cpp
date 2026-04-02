 #include<iostream>
 #include<string>
 using namespace std;
 class invoice{
   private:
 string partnumber;
 string partdescription;
 int qoitem=0;
 double ppitem=0.0;
  public:
 invoice(string na,string pa,int it,double ppt)
 {
    partnumber=na;
    partdescription=pa;
    qoitem=it;
    ppitem=ppt;
 }
 void setpartnumber();
 void getinvoiceAmount()
 {
    double s=qoitem*ppitem;
    cout<<"printing amount"<<s<<endl;
 }
};
 int main()
 {
    string na,pa;
    int it;
    double ppt;
    invoice ivv("jhalak","handle",8,700);
    ivv.getinvoiceAmount();


    return 0;
 }