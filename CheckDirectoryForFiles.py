import os

dirName = '/home/abhishek/Desktop/TextClassification/PythonRevisionForMachineLearning/'  
files = os.listdir(dirName) 

if any(name.endswith('.py') for name in files): 
        print("PYTHON IS PRESENT !") 
else: 
        print("THERE ARE NO PYTHON FILES IN THIS DIRECTORY !!") 

