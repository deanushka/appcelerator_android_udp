/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/qc/lnrk38mx3973qf0c8qdccpt80000gn/T/deanmcgowan/udp-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/qc/lnrk38mx3973qf0c8qdccpt80000gn/T/deanmcgowan/udp-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.udp.UdpModule.h"
#include "ti.udp.SocketProxy.h"


#line 14 "/private/var/folders/qc/lnrk38mx3973qf0c8qdccpt80000gn/T/deanmcgowan/udp-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 3, duplicates = 0 */

class UdpBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
UdpBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
UdpBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 16,
      MAX_WORD_LENGTH = 18,
      MIN_HASH_VALUE = 16,
      MAX_HASH_VALUE = 18
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/qc/lnrk38mx3973qf0c8qdccpt80000gn/T/deanmcgowan/udp-generated/KrollGeneratedBindings.gperf"
      {"ti.udp.UdpModule", ::ti::udp::UdpModule::bindProxy, ::ti::udp::UdpModule::dispose},
      {""},
#line 17 "/private/var/folders/qc/lnrk38mx3973qf0c8qdccpt80000gn/T/deanmcgowan/udp-generated/KrollGeneratedBindings.gperf"
      {"ti.udp.SocketProxy", ::ti::udp::udp::SocketProxy::bindProxy, ::ti::udp::udp::SocketProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/qc/lnrk38mx3973qf0c8qdccpt80000gn/T/deanmcgowan/udp-generated/KrollGeneratedBindings.gperf"

