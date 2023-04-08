import matplotlib.pyplot as plt

# Data
block_size = [2, 4, 8, 16, 32]
miss_ratio = [0.5, 0.285, 0.142, 0.0714, 0.0714]
threshold = 0.5

# Create the plot
fig, ax = plt.subplots(figsize=(6, 4))
ax.plot(block_size, miss_ratio, marker='o')

# Set the title and axis labels
ax.set_title('Cache Miss Ratio vs block Size')
ax.set_xlabel('block Size')
ax.set_ylabel('Miss Ratio')

# Set the x-axis scale to logarithmic
ax.set_xscale('log')

# Set x-axis tick locations and labels
ax.set_xticks(block_size)
ax.set_xticklabels(block_size)

# Annotate data points with rotated y-axis labels (only for vague values)
for i in range(len(block_size)):
    if miss_ratio[i] < threshold:
        ax.text(block_size[i], miss_ratio[i], f'{miss_ratio[i]:.3f}',
                ha='center', va='bottom', rotation=-45)

# Show the plot
plt.show()
