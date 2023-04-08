import matplotlib.pyplot as plt

# data for the graph
set_blocks = [2, 4, 8]
hit_ratios = [0.2, 0.4, 0.4]

# plot the graph
plt.plot(set_blocks, hit_ratios, marker='o')

# add labels and title
plt.xlabel('Set Blocks')
plt.ylabel('Hit Ratio')
plt.title('Effect of Number of Sets on Cache Performance')

# add annotations for each data point
for i in range(len(set_blocks)):
    plt.annotate(f"({set_blocks[i]}, {hit_ratios[i]})", (set_blocks[i], hit_ratios[i]))

# show the graph
plt.show()
