import matplotlib.pyplot as plt

# Cache miss ratio values
miss_ratios = [0.5, 0.5, 0.5, 0.5, 0.5]

# Cache sizes
cache_sizes = [4, 8, 16, 32, 64]

# Plot graph
plt.plot(cache_sizes, miss_ratios, '-o')

# Set axis labels and title
plt.xlabel('Cache size')
plt.ylabel('Cache miss ratio')
plt.title('Fully Associative Cache Analysis')

# Set y-axis limit and ticks
plt.ylim(0, 1)
plt.yticks([0, 0.25, 0.5, 0.75, 1.0])

# Annotate data points with rotated y-axis labels (only for vague values)
for i in range(len(cache_sizes)):
    plt.text(cache_sizes[i], miss_ratios[i], f'{cache_sizes[i]:d}', ha='center', va='bottom')
        
# Display plot
plt.show()
