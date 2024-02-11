import os
file_name = 'Data.txt'
def recursive_listdir(path):
	files = os.listdir(path)
	with open(file_name, 'w') as file:
		file.write("File name:\n")
	for file_n in files:
		file_path = os.path.join(path, file_n)
		if file_path.endswith('.txt'):
			if os.path.isfile(file_path):
				with open(file_name, 'a') as file:
					file.write(file_n+"\n")
			elif os.path.isdir(file_path):
				recursive_listdir(file_path)

recursive_listdir(r'./Data')
