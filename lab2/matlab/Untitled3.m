GenerateSignal(32,32*32*16);
clear all
Y1=dlmread('C:/Users/lvuti/Desktop/t.txt');
Y2=dlmread('C:/Users/lvuti/Desktop/t2.txt');
Z1=zeros(1,length(Y1)/2);
for j=1:length(Y1)/2
Z1(j)=Y1(2*j-1)+i*Y1(2*j);
end

Z2=zeros(1,length(Y2)/2);
for j=1:length(Y2)/2
Z2(j)=Y2(2*j-1)+i*Y2(2*j);
end

DPF=fft(Z1)/sqrt(length(Z1));
DPF2=fft(Z2)/sqrt(length(Z2));
SVERTKA = conv(Z1, Z2)

