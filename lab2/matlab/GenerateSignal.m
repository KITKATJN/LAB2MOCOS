% function X=GenerateSignal(N)
% N=2*N;
% X=rand(N);
% writematrix(X,'C:\Users\lvuti\Desktop\t.txt','Delimiter','space');
% end

function X=GenerateSignal(N,N2)
N=2*N;
N2=2*N2;
X=rand(1,N);
X2=rand(1,N2);
fid=fopen('C:\Users\lvuti\Desktop\t.txt','w');
fid2=fopen('C:\Users\lvuti\Desktop\t2.txt','w');
if fid==-1
error('File is not opened');
end
if fid2==-1
error('File is not opened');
end
%fwrite(fid,X,'double');
%for (i = 1 : N)
    fprintf(fid,'%8f ',X);
    fprintf(fid2,'%8f ',X2);
%end
fclose(fid);
fclose(fid2);
end
 
% function X=GenerateSignal(N)
% N=2*N;
% X=rand(N);
% 
% dlmwrite('C:\Users\lvuti\Desktop\t.txt',X,' ');
% end