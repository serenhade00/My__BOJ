num_list = []
N = int(input()) 
for i in range(N) :
    num_list.append(int(input())) 
if num_list[1] - num_list[0] == num_list[2] - num_list[1] : 
    print(num_list[-1] + num_list[2] - num_list[1])
elif num_list[1] / num_list[0] == num_list[2] / num_list[1] : 
    print(int(num_list[-1] *(num_list[2] / num_list[1])))