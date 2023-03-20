from coderead import OCR

# Load the image
img_path = './ocr1.png'

# Perform OCR using CodeRead
ocr = OCR()
code = ocr.read_image(img_path)

# Print the extracted code
print(code)
