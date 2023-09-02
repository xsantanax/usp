#####
# IMPORT PACKAGES
#####
import sys
import time

from SearchTree import SearchTree,Node
from State import State
from a_star import *

#####
# PROBLEM CONFIGURATION
#####
# a. total number of canibbals and missionaries
N_CANIBBALS, M_MISSIONARIES = 4, 4

# b. start and terminal state
START_STATE = State(c_cannibals = N_CANIBBALS, m_missionaries = M_MISSIONARIES,\
						side = 1, status = (0,0))
TERMINAL_STATE = State(c_cannibals = N_CANIBBALS, m_missionaries = M_MISSIONARIES,\
						side = -1, status = (N_CANIBBALS,M_MISSIONARIES))

# c. actions (transitions)
ACTIONS = [(2,0),(0,2),(1,1),(1,0),(0,1)]

# d. OS constraint
sys.setrecursionlimit(50000)

# e. execution parameter
N_EXPERIMENTS = 5

#####
# CROSSING PROBLEM AUX METHODS
#####
def is_terminal(state):
	if state.is_equal(TERMINAL_STATE):
		return True
	return False

def dfs_expansion(cur_node,max_depth,actions):
	# a. checking the stop conditions
	if cur_node.depth == max_depth:
		return
	if is_terminal(cur_node.state):
		return

	# b. rolling out (building the tree/adding the childs)
	for a in actions:
		new_state = cur_node.state.move(a)
		if new_state is not None:
			child = cur_node.add_child_state(new_state)
			dfs_expansion(child,max_depth,actions)

#####
# CROSSING PROBLEM
#####
# 1. Initialising the search tree
max_depth=1
start_node = Node(START_STATE)
search_tree = SearchTree(start_node,max_depth)

# 2. Building the entire tree (with restrictions)
start_time = time.time()
dfs_expansion(search_tree.root, search_tree.max_depth, ACTIONS)
end_time = time.time()
time.sleep(0.2)

# 3. Searching for solutions
# a. depth-first search
'''
print ('Depth-First Search - DFS')
#file header
file = open("outputDFS"+str(max_depth)+".csv","a")
file.write('Tree Build Time'+"\t" + str(end_time - start_time)+"\n")
file.write('Depth'+"\t" + 'Visited Nodes'+"\t" + 'Execution Time'+"\n")
file.close()

for i in range(N_EXPERIMENTS):
	search_tree.dfs(search_tree.root,TERMINAL_STATE)
'''

# b. breadth-first search
'''
print ('Breadth-First Search - BFS')
#file header
file = open("outputBFS"+str(max_depth)+".csv","a")
file.write('Tree Build Time'+"\t" + str(end_time - start_time)+"\n")
file.write('Depth'+"\t" + 'Visited Nodes'+"\t" + 'Execution Time'+"\n")
file.close()
for i in range(N_EXPERIMENTS):
	search_tree.bfs(search_tree.root,TERMINAL_STATE)
'''

# c. heuristic: a-star
print('A Star')
#file header
file = open("outputAStar"+str(max_depth)+".csv","a")
file.write('Tree Build Time'+"\t" + str(end_time - start_time)+"\n")
file.write('Execution Time'+"\n")
file.close()

search_astar = SearchAStar(START_STATE,ACTIONS)
for i in range(N_EXPERIMENTS):

	start_time = time.time()
	search_astar.search(TERMINAL_STATE)
	end_time = time.time()
	time.sleep(0.2)

	file = open("outputAStar"+str(max_depth)+".csv","a")
	file.write(str(end_time - start_time)+"\n")
	file.close()
	time.sleep(0.2)
