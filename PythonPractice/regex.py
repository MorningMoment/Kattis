import re


test_str = "abced anced eeef dfkfhksdhf eeef eeef this is awesome awesome this is is aweso"

regex = r'\b(.{1,})\s\1+'

for i in re.finditer(regex,test_str,re.MULTILINE):
    print(i.start(),i.end(),i.expand('zzz'))

\