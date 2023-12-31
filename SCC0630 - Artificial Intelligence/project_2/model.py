import torch
import torch.nn as nn
import torch.nn.functional as F


from config import Config

class Net(nn.Module):

    def __init__(self):
        super(Net, self).__init__()
        # 
        self.fc1 = nn.Linear(35, Config.CLASSES_NUMBER)  # total number of activities to be evaluated
        self.fc2 = nn.Linear(Config.CLASSES_NUMBER, Config.CLASSES_NUMBER)
        self.fc3 = nn.Linear(Config.CLASSES_NUMBER, Config.CLASSES_NUMBER)
        self.fc4 = nn.Linear(Config.CLASSES_NUMBER, 2)

    def forward(self, x):
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = F.relu(self.fc3(x))
        x = self.fc4(x)
        return x




