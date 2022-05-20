class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        seen = set()
        for mail in emails:
            name, domain = mail.split("@")
            local = name.split('+')[0].replace('.', '')
            seen.add(local + '@' + domain)
        return len(seen)
            
            