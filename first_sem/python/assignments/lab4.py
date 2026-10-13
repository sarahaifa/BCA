raw_data = """
        naveen KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

# Remove extra spaces and split into lines
lines = raw_data.strip().splitlines()

# Get name
name = " ".join(lines[0].split()).title()

# Get initials
parts = name.split()
initials = parts[0][0] + parts[1][0]

# Get email
email = lines[1].strip().lower()

# Get domain
domain = email.split("@")[1]

# Get phone number
phone = lines[2].strip()

# Remove country code and special characters
digits = phone.replace("+91-", "").replace("-", "")

# Mask all except last 4 digits
masked_phone = "*" * (len(digits) - 4) + digits[-4:]

# Validate email and phone
valid_email = "@" in email and "." in domain
valid_phone = len(digits) == 10 and digits.isdigit()

valid = valid_email and valid_phone

print("Name     :", name)
print("Initials :", initials)
print("Email    :", email)
print("Domain   :", domain)
print("Phone    :", masked_phone)
print("Valid    :", valid)