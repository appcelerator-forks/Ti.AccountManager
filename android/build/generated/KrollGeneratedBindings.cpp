/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/AccountManager-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/AccountManager-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.accountmanager.AccountManagerModule.h"


#line 13 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/AccountManager-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class AccountManagerBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AccountManagerBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AccountManagerBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 38,
      MAX_WORD_LENGTH = 38,
      MIN_HASH_VALUE = 38,
      MAX_HASH_VALUE = 38
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 15 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/AccountManager-generated/KrollGeneratedBindings.gperf"
      {"ti.accountmanager.AccountManagerModule", ::ti::accountmanager::AccountManagerModule::bindProxy, ::ti::accountmanager::AccountManagerModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/AccountManager-generated/KrollGeneratedBindings.gperf"

