import matplotlib.pyplot as plt

# Data from the table
cache_sizes = [8, 16, 32, 64]
hit_ratios = [0, 0.1, 0.2, 0.4]

# Plot the graph
plt.plot(cache_sizes, hit_ratios, '-o')

# Add annotations to the data points
for x, y in zip(cache_sizes, hit_ratios):
    label = f"({x}, {y:.2f})"
    plt.annotate(label, (x, y), textcoords="offset points", xytext=(0, 10), ha='center')

# Add labels and title
plt.xlabel('Cache size')
plt.ylabel('Hit ratio')
plt.title('Effect of cache size on Set Associative Mapped Cache performance')

# Display the plot
plt.show()
