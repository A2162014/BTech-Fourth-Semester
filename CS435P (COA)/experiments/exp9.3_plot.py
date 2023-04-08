import matplotlib.pyplot as plt

# Data
cache_size = [4, 8, 16, 32, 64]
miss_ratio = [0.5, 0.5, 0.5, 0.5, 0.5]

# Create the plot
fig, ax = plt.subplots(figsize=(6, 4))
ax.plot(cache_size, miss_ratio, marker='o')

# Set the title and axis labels
ax.set_title('Cache Miss Ratio vs Cache Size')
ax.set_xlabel('Cache Size')
ax.set_ylabel('Miss Ratio')

# Set x-axis tick locations and labels
ax.set_xticks(cache_size)
ax.set_xticklabels(cache_size)

# Show the plot
plt.show()
