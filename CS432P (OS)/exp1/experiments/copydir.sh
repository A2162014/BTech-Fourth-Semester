# Exp-1: B

# 10) write a shell script to copy files into a new directory.

# Done by: Ashvath S.P
# Date: 22-01-2023

read -p "Enter a new directory name: " new_dir

if [ -d "$new_dir" ]; then
    echo "Error: $new_dir already exists."
    exit 1
else
    mkdir "$new_dir"
fi

read -p "Enter number of files to copy: " num_files

counter=1
while [ $counter -le $num_files ]
do
    read -p "Enter file name: " file_name
    if [ ! -f "$file_name" ]; then
        echo "Error: $file_name does not exist or not a regular file."
    else
        cp "$file_name" "$new_dir"
        counter=$((counter + 1))
    fi
done

echo "Successfully copied $num_files files to $new_dir"