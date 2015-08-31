//#include <stdio.h>
//
//typedef enum {false, true} bool;
//
//int main(void){
//
//	int i, j, p, q, k,  max = 0, minMax = 0, count = 0;
//	int arr[4][4] = {0,};
//	int sum[4] = {0, };
//	int min[4] = {10000,10000,10000,10000};
//	int minTable[4] = {4,4,4,4};
//	int team[4] = {-1, -1, -1, -1};
//	int table[4] = {-1, -1, -1, -1};
//	bool flag = true, flag2 = true;
//
//	for(i=0; i<4; i++){
//		for(j=0; j<4; j++){
//			scanf("%d", &arr[i][j]);
//			sum[j] += arr[i][j];
//		}
//	}
//
//	for(p=0; p<4; p++){
//		min[0] = 10000;
//		min[1] = 10000;
//		min[2] = 10000;
//		min[3] = 10000;
//		for(i=0; i<4; i++){
//			for(j=0; j<4; j++){
//
//				for(q=0; q<p; q++){
//					if(j == team[q]){ 
//						flag = false;
//						break;
//					}
//					if(i == table[q]){
//						flag = false;
//						break;
//					}
//				}
//
//				if(flag){
//					if(min[j] > sum[j] - arr[i][j]){
//						min[j] = sum[j] - arr[i][j];
//						minTable[j] = i;
//					}
//				}
//				flag = true;
//			}
//		}
//
//		for(k=0; k<4; k++){
//
//			for(q=0; q<p; q++){
//				if(k == team[q]){
//					flag2 = false;
//					break;
//				}
//			}
//			if(flag2 == true){
//				if(min[k] > minMax){
//					minMax = min[k];
//					team[p] = k;
//					table[p] = minTable[k];
//				}
//			}
//			flag2 = true;
//		}
//		count += minMax;
//		minMax = 0;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//	
//}