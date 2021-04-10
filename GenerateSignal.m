% function X=GenerateSignal(N)
% N=2*N;
% X=rand(N);
% writematrix(X,'C:\Users\lvuti\Desktop\t.txt','Delimiter','space');
% end

function X=GenerateSignal(N)
N=2*N
X=rand(1,N);
fid=fopen('C:\Users\lvuti\Desktop\t.txt','w');
if fid==-1
error('File is not opened');
end
%fwrite(fid,X,'double');
%for (i = 1 : N)
    fprintf(fid,'%8f ',X);
%end
fclose(fid);
end
 
% function X=GenerateSignal(N)
% N=2*N;
% X=rand(N);
% 
% dlmwrite('C:\Users\lvuti\Desktop\t.txt',X,' ');
% end