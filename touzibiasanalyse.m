clear all;
format long;

baseDir = 'C:\\exp\\SLC\\subarea2\\convair\\';

FilterName = 'Touzi_alphas_0';
% reading data  C11 for Odd
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_odd = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_odd);
meanvalue = mean(temp_odd);
absrelative_alphas_0 = min(abs(temp_odd(:)-meanvalue)./temp_odd(:),1.0);
total_median_0 = median(absrelative_alphas_0);


FilterName = 'Touzi_alphas_1';
% reading data C11 for Dbl
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_dbl = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_dbl);
meanvalue = mean(temp_dbl);
absrelative_alphas_1 = min(abs(temp_dbl(:)-meanvalue)./temp_dbl(:),1.0);
total_median_1 = median(absrelative_alphas_1);


FilterName = 'Touzi_alphas_2';
% reading data C11 for Vol
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_vol = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_vol);
meanvalue = mean(temp_vol);
absrelative_alphas_2 = min(abs(temp_vol(:)-meanvalue)./temp_vol(:),1.0);
total_median_2 = median(absrelative_alphas_2);


FilterName = 'Touzi_alphas_3';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_alphas_3 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_3 = median(absrelative_alphas_3);


FilterName = 'Touzi_alphas_4';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_alphas_4 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_4 = median(absrelative_alphas_4);


FilterName = 'Touzi_alphas_5';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_alphas_5 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_5 = median(absrelative_alphas_5);


FilterName = 'Touzi_alphas_6';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_alphas_6 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_6 = median(absrelative_alphas_6);


FilterName = 'Touzi_alphas_7';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_alphas_7 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_7 = median(absrelative_alphas_7);


FilterName = 'Touzi_alphas_8';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_alphas_8 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_8 = median(absrelative_alphas_8);

% calculate 

X = sprintf('The absrelative_alphas_0 abs is: %8.7f\n',total_median_0);
disp(X);
X = sprintf('The absrelative_alphas_1 abs is: %8.7f\n',total_median_1);
disp(X);
X = sprintf('The absrelative_alphas_2 abs is: %8.7f\n',total_median_2);
disp(X);
X = sprintf('The absrelative_alphas_3 abs is: %8.7f\n',total_median_3);
disp(X);
X = sprintf('The absrelative_alphas_4 abs is: %8.7f\n',total_median_4);
disp(X);
X = sprintf('The absrelative_alphas_5 abs is: %8.7f\n',total_median_5);
disp(X);
X = sprintf('The absrelative_alphas_6 abs is: %8.7f\n',total_median_6);
disp(X);
X = sprintf('The absrelative_alphas_7 abs is: %8.7f\n',total_median_7);
disp(X);
X = sprintf('The absrelative_alphas_8 abs is: %8.7f\n',total_median_8);
disp(X);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
FilterName = 'Touzi_phis_0';
% reading data  C11 for Odd
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_odd = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_odd);
meanvalue = mean(temp_odd);
absrelative_phis_0 = min(abs(temp_odd(:)-meanvalue)./temp_odd(:),1.0);
total_median_0 = median(abs(absrelative_phis_0));


FilterName = 'Touzi_phis_1';
% reading data C11 for Dbl
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_dbl = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_dbl);
meanvalue = mean(temp_dbl);
absrelative_phis_1 = min(abs(temp_dbl(:)-meanvalue)./temp_dbl(:),1.0);
total_median_1 = median(abs(absrelative_phis_1));

FilterName = 'Touzi_phis_2';
% reading data C11 for Vol
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_vol = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_vol);
meanvalue = mean(temp_vol);
absrelative_phis_2 = min(abs(temp_vol(:)-meanvalue)./temp_vol(:),1.0);
total_median_2 = median(abs(absrelative_phis_2));

FilterName = 'Touzi_phis_3';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_phis_3 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_3 = median(abs(absrelative_phis_3));

FilterName = 'Touzi_phis_4';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_phis_4 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_4 = median(abs(absrelative_phis_4));

FilterName = 'Touzi_phis_5';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_phis_5 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_5 = median(abs(absrelative_phis_5));

FilterName = 'Touzi_phis_6';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_phis_6 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_6 = median(abs(absrelative_phis_6));

FilterName = 'Touzi_phis_7';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_phis_7 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_7 = median(abs(absrelative_phis_7));

FilterName = 'Touzi_phis_8';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_phis_8 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_8 = median(abs(absrelative_phis_8));

% calculate 


X = sprintf('The absrelative_phis_0 abs is: %8.7f\n',total_median_0);
disp(X);
X = sprintf('The absrelative_phis_1 abs is: %8.7f\n',total_median_1);
disp(X);
X = sprintf('The absrelative_phis_2 abs is: %8.7f\n',total_median_2);
disp(X);
X = sprintf('The absrelative_phis_3 abs is: %8.7f\n',total_median_3);
disp(X);
X = sprintf('The absrelative_phis_4 abs is: %8.7f\n',total_median_4);
disp(X);
X = sprintf('The absrelative_phis_5 abs is: %8.7f\n',total_median_5);
disp(X);
X = sprintf('The absrelative_phis_6 abs is: %8.7f\n',total_median_6);
disp(X);
X = sprintf('The absrelative_phis_7 abs is: %8.7f\n',total_median_7);
disp(X);
X = sprintf('The absrelative_phis_8 abs is: %8.7f\n',total_median_8);
disp(X);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
FilterName = 'Touzi_tau_0';
% reading data  C11 for Odd
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_odd = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_odd);
meanvalue = mean(temp_odd);
absrelative_tau_0 = min(abs(temp_odd(:)-meanvalue)./temp_odd(:),1.0);
total_median_0 = median(abs(absrelative_tau_0));


FilterName = 'Touzi_tau_1';
% reading data C11 for Dbl
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_dbl = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_dbl);
meanvalue = mean(temp_dbl);
absrelative_tau_1 = min(abs(temp_dbl(:)-meanvalue)./temp_dbl(:),1.0);
total_median_1 = median(abs(absrelative_tau_1));

FilterName = 'Touzi_tau_2';
% reading data C11 for Vol
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_vol = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_vol);
meanvalue = mean(temp_vol);
absrelative_tau_2 = min(abs(temp_vol(:)-meanvalue)./temp_vol(:),1.0);
total_median_2 = median(abs(absrelative_tau_2));

FilterName = 'Touzi_tau_3';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_tau_3 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_3 = median(abs(absrelative_tau_3));

FilterName = 'Touzi_tau_4';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_tau_4 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_4 = median(abs(absrelative_tau_4));

FilterName = 'Touzi_tau_5';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_tau_5 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_5 = median(abs(absrelative_tau_5));

FilterName = 'Touzi_tau_6';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_tau_6 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_6 = median(abs(absrelative_tau_6));

FilterName = 'Touzi_tau_7';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_tau_7 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_7 = median(abs(absrelative_tau_7));

FilterName = 'Touzi_tau_8';
% reading data C11 for Hlx
file_id = fopen(strcat(baseDir,FilterName),'rb');
temp_hlx = fscanf(file_id,'%f\n');
fclose(file_id);
rows = size(temp_hlx);
meanvalue = mean(temp_hlx);
absrelative_tau_8 = min(abs(temp_hlx(:)-meanvalue)./temp_hlx(:),1.0);
total_median_8 = median(abs(absrelative_tau_8));

% calculate 


X = sprintf('The absrelative_tau_0 abs is: %8.7f\n',total_median_0);
disp(X);
X = sprintf('The absrelative_tau_1 abs is: %8.7f\n',total_median_1);
disp(X);
X = sprintf('The absrelative_tau_2 abs is: %8.7f\n',total_median_2);
disp(X);
X = sprintf('The absrelative_tau_3 abs is: %8.7f\n',total_median_3);
disp(X);
X = sprintf('The absrelative_tau_4 abs is: %8.7f\n',total_median_4);
disp(X);
X = sprintf('The absrelative_tau_5 abs is: %8.7f\n',total_median_5);
disp(X);
X = sprintf('The absrelative_tau_6 abs is: %8.7f\n',total_median_6);
disp(X);
X = sprintf('The absrelative_tau_7 abs is: %8.7f\n',total_median_7);
disp(X);
X = sprintf('The absrelative_tau_8 abs is: %8.7f\n',total_median_8);
disp(X);
