#include "nan.h"

#ifdef HAVE_SOCKET_H
#include <asm-i386/socket.h>
#endif
#ifdef HAVE_TERMIOS_H
#include <asm-i386/termios.h>
#endif
#ifdef HAVE_AX25_H
#include <linux/ax25.h>
#endif
#ifdef HAVE_CDK_H
#include <linux/cdk.h>
#endif
#ifdef HAVE_CDROM_H
#include <linux/cdrom.h>
#endif
#ifdef HAVE_CM206_H
#include <linux/cm206.h>
#endif
#ifdef HAVE_CYCLADES_H
#include <linux/cyclades.h>
#endif
#ifdef HAVE_FD_H
#include <linux/fd.h>
#endif
#ifdef HAVE_FS_H
#include <linux/fs.h>
#endif
#ifdef HAVE_HDREG_H
#include <linux/hdreg.h>
#endif
#ifdef HAVE_IF_EQL_H
#include <linux/if_eql.h>
#endif
#ifdef HAVE_IF_PLIP_H
#include <linux/if_plip.h>
#endif
#ifdef HAVE_IF_PPP_H
#include <linux/if_ppp.h>
#endif
#ifdef HAVE_IPX_H
#include <linux/ipx.h>
#endif
#ifdef HAVE_KD_H
#include <linux/kd.h>
#endif
#ifdef HAVE_LP_H
#include <linux/lp.h>
#endif
#ifdef HAVE_MROUTE_H
#include <linux/mroute.h>
#endif
#ifdef HAVE_MSDOS_FS_H
#include <linux/msdos_fs.h>
#endif
#ifdef HAVE_MTIO_H
#include <linux/mtio.h>
#endif
#ifdef HAVE_NETROM_H
#include <linux/netrom.h>
#endif
#ifdef HAVE_WIRELESS_H
#include <uapi/linux/wireless.h>
#endif
#ifdef HAVE_SBPCD_H
#include <linux/sbpcd.h>
#endif
#ifdef HAVE_SCC_H
#include <linux/scc.h>
#endif
#ifdef HAVE_SCSI_H
#include <linux/scsi.h>
#endif
#ifdef HAVE_SMB_FS_H
#include <linux/smb_fs.h>
#endif
#ifdef HAVE_SOCKIOS_H
#include <uapi/linux/sockios.h>
#endif
#ifdef HAVE_SOUNDCARD_H
#include <linux/soundcard.h>
#endif
#ifdef HAVE_TIMERFD_H
#include <linux/timerfd.h>
#endif
#ifdef HAVE_UMSDOS_FS_H
#include <linux/umsdos_fs.h>
#endif
#ifdef HAVE_VT_H
#include <linux/vt.h>
#endif

using namespace v8;
using namespace node;

#define ADD_IOCTL_COMMAND(target, command) Nan::Set(target, Nan::New(#command).ToLocalChecked(), Nan::New<Number>(command));

Local<Object> get_list() {
    Local<Object> target = Nan::New<Object>();

    #ifdef FIOSETOWN
    ADD_IOCTL_COMMAND(target, FIOSETOWN)
    #endif
    #ifdef SIOCSPGRP
    ADD_IOCTL_COMMAND(target, SIOCSPGRP)
    #endif
    #ifdef FIOGETOWN
    ADD_IOCTL_COMMAND(target, FIOGETOWN)
    #endif
    #ifdef SIOCGPGRP
    ADD_IOCTL_COMMAND(target, SIOCGPGRP)
    #endif
    #ifdef SIOCATMAR
    ADD_IOCTL_COMMAND(target, SIOCATMAR)
    #endif
    #ifdef SIOCGSTAMP
    ADD_IOCTL_COMMAND(target, SIOCGSTAMP)
    #endif
    #ifdef TCGETS
    ADD_IOCTL_COMMAND(target, TCGETS)
    #endif
    #ifdef TCSETS
    ADD_IOCTL_COMMAND(target, TCSETS)
    #endif
    #ifdef TCSETSW
    ADD_IOCTL_COMMAND(target, TCSETSW)
    #endif
    #ifdef TCSETSF
    ADD_IOCTL_COMMAND(target, TCSETSF)
    #endif
    #ifdef TCGETA
    ADD_IOCTL_COMMAND(target, TCGETA)
    #endif
    #ifdef TCSETA
    ADD_IOCTL_COMMAND(target, TCSETA)
    #endif
    #ifdef TCSETAW
    ADD_IOCTL_COMMAND(target, TCSETAW)
    #endif
    #ifdef TCSETAF
    ADD_IOCTL_COMMAND(target, TCSETAF)
    #endif
    #ifdef TCSBRK
    ADD_IOCTL_COMMAND(target, TCSBRK)
    #endif
    #ifdef TCXONC
    ADD_IOCTL_COMMAND(target, TCXONC)
    #endif
    #ifdef TCFLSH
    ADD_IOCTL_COMMAND(target, TCFLSH)
    #endif
    #ifdef TIOCEXCL
    ADD_IOCTL_COMMAND(target, TIOCEXCL)
    #endif
    #ifdef TIOCNXCL
    ADD_IOCTL_COMMAND(target, TIOCNXCL)
    #endif
    #ifdef TIOCSCTTY
    ADD_IOCTL_COMMAND(target, TIOCSCTTY)
    #endif
    #ifdef TIOCGPGRP
    ADD_IOCTL_COMMAND(target, TIOCGPGRP)
    #endif
    #ifdef TIOCSPGRP
    ADD_IOCTL_COMMAND(target, TIOCSPGRP)
    #endif
    #ifdef TIOCOUTQ
    ADD_IOCTL_COMMAND(target, TIOCOUTQ)
    #endif
    #ifdef TIOCSTI
    ADD_IOCTL_COMMAND(target, TIOCSTI)
    #endif
    #ifdef TIOCGWINSZ
    ADD_IOCTL_COMMAND(target, TIOCGWINSZ)
    #endif
    #ifdef TIOCSWINSZ
    ADD_IOCTL_COMMAND(target, TIOCSWINSZ)
    #endif
    #ifdef TIOCMGET
    ADD_IOCTL_COMMAND(target, TIOCMGET)
    #endif
    #ifdef TIOCMBIS
    ADD_IOCTL_COMMAND(target, TIOCMBIS)
    #endif
    #ifdef TIOCMBIC
    ADD_IOCTL_COMMAND(target, TIOCMBIC)
    #endif
    #ifdef TIOCMSET
    ADD_IOCTL_COMMAND(target, TIOCMSET)
    #endif
    #ifdef TIOCGSOFTCAR
    ADD_IOCTL_COMMAND(target, TIOCGSOFTCAR)
    #endif
    #ifdef TIOCSSOFTCAR
    ADD_IOCTL_COMMAND(target, TIOCSSOFTCAR)
    #endif
    #ifdef FIONREAD
    ADD_IOCTL_COMMAND(target, FIONREAD)
    #endif
    #ifdef TIOCINQ
    ADD_IOCTL_COMMAND(target, TIOCINQ)
    #endif
    #ifdef TIOCLINUX
    ADD_IOCTL_COMMAND(target, TIOCLINUX)
    #endif
    #ifdef TIOCCONS
    ADD_IOCTL_COMMAND(target, TIOCCONS)
    #endif
    #ifdef TIOCGSERIAL
    ADD_IOCTL_COMMAND(target, TIOCGSERIAL)
    #endif
    #ifdef TIOCSSERIAL
    ADD_IOCTL_COMMAND(target, TIOCSSERIAL)
    #endif
    #ifdef TIOCPKT
    ADD_IOCTL_COMMAND(target, TIOCPKT)
    #endif
    #ifdef FIONBIO
    ADD_IOCTL_COMMAND(target, FIONBIO)
    #endif
    #ifdef TIOCNOTTY
    ADD_IOCTL_COMMAND(target, TIOCNOTTY)
    #endif
    #ifdef TIOCSETD
    ADD_IOCTL_COMMAND(target, TIOCSETD)
    #endif
    #ifdef TIOCGETD
    ADD_IOCTL_COMMAND(target, TIOCGETD)
    #endif
    #ifdef TCSBRKP
    ADD_IOCTL_COMMAND(target, TCSBRKP)
    #endif
    #ifdef TIOCTTYGSTRUCT
    ADD_IOCTL_COMMAND(target, TIOCTTYGSTRUCT)
    #endif
    #ifdef FIONCLEX
    ADD_IOCTL_COMMAND(target, FIONCLEX)
    #endif
    #ifdef FIOCLEX
    ADD_IOCTL_COMMAND(target, FIOCLEX)
    #endif
    #ifdef FIOASYNC
    ADD_IOCTL_COMMAND(target, FIOASYNC)
    #endif
    #ifdef TIOCSERCONFIG
    ADD_IOCTL_COMMAND(target, TIOCSERCONFIG)
    #endif
    #ifdef TIOCSERGWILD
    ADD_IOCTL_COMMAND(target, TIOCSERGWILD)
    #endif
    #ifdef TIOCSERSWILD
    ADD_IOCTL_COMMAND(target, TIOCSERSWILD)
    #endif
    #ifdef TIOCGLCKTRMIOS
    ADD_IOCTL_COMMAND(target, TIOCGLCKTRMIOS)
    #endif
    #ifdef TIOCSLCKTRMIOS
    ADD_IOCTL_COMMAND(target, TIOCSLCKTRMIOS)
    #endif
    #ifdef TIOCSERGSTRUCT
    ADD_IOCTL_COMMAND(target, TIOCSERGSTRUCT)
    #endif
    #ifdef TIOCSERGETLSR
    ADD_IOCTL_COMMAND(target, TIOCSERGETLSR)
    #endif
    #ifdef TIOCSERGETMULTI
    ADD_IOCTL_COMMAND(target, TIOCSERGETMULTI)
    #endif
    #ifdef TIOCSERSETMULTI
    ADD_IOCTL_COMMAND(target, TIOCSERSETMULTI)
    #endif
    #ifdef SIOCAX
    ADD_IOCTL_COMMAND(target, SIOCAX)
    #endif
    #ifdef SIOCAX
    ADD_IOCTL_COMMAND(target, SIOCAX)
    #endif
    #ifdef SIOCAX
    ADD_IOCTL_COMMAND(target, SIOCAX)
    #endif
    #ifdef SIOCAX
    ADD_IOCTL_COMMAND(target, SIOCAX)
    #endif
    #ifdef SIOCAX
    ADD_IOCTL_COMMAND(target, SIOCAX)
    #endif
    #ifdef SIOCAX
    ADD_IOCTL_COMMAND(target, SIOCAX)
    #endif
    #ifdef SIOCAX
    ADD_IOCTL_COMMAND(target, SIOCAX)
    #endif
    #ifdef STL_BINTR
    ADD_IOCTL_COMMAND(target, STL_BINTR)
    #endif
    #ifdef STL_BSTART
    ADD_IOCTL_COMMAND(target, STL_BSTART)
    #endif
    #ifdef STL_BSTOP
    ADD_IOCTL_COMMAND(target, STL_BSTOP)
    #endif
    #ifdef STL_BRESET
    ADD_IOCTL_COMMAND(target, STL_BRESET)
    #endif
    #ifdef CDROMPAUSE
    ADD_IOCTL_COMMAND(target, CDROMPAUSE)
    #endif
    #ifdef CDROMRESUME
    ADD_IOCTL_COMMAND(target, CDROMRESUME)
    #endif
    #ifdef CDROMPLAYMSF
    ADD_IOCTL_COMMAND(target, CDROMPLAYMSF)
    #endif
    #ifdef CDROMPLAYTRKIND
    ADD_IOCTL_COMMAND(target, CDROMPLAYTRKIND)
    #endif
    #ifdef CDROMREADTOCHDR
    ADD_IOCTL_COMMAND(target, CDROMREADTOCHDR)
    #endif
    #ifdef CDROMREADTOCENTRY
    ADD_IOCTL_COMMAND(target, CDROMREADTOCENTRY)
    #endif
    #ifdef CDROMSTOP
    ADD_IOCTL_COMMAND(target, CDROMSTOP)
    #endif
    #ifdef CDROMSTART
    ADD_IOCTL_COMMAND(target, CDROMSTART)
    #endif
    #ifdef CDROMEJECT
    ADD_IOCTL_COMMAND(target, CDROMEJECT)
    #endif
    #ifdef CDROMVOLCTRL
    ADD_IOCTL_COMMAND(target, CDROMVOLCTRL)
    #endif
    #ifdef CDROMSUBCHNL
    ADD_IOCTL_COMMAND(target, CDROMSUBCHNL)
    #endif
    #ifdef CDROMREADMODE
    ADD_IOCTL_COMMAND(target, CDROMREADMODE)
    #endif
    #ifdef CDROMREADMODE
    ADD_IOCTL_COMMAND(target, CDROMREADMODE)
    #endif
    #ifdef CDROMREADAUDIO
    ADD_IOCTL_COMMAND(target, CDROMREADAUDIO)
    #endif
    #ifdef CDROMEJECT_SW
    ADD_IOCTL_COMMAND(target, CDROMEJECT_SW)
    #endif
    #ifdef CDROMMULTISESSION
    ADD_IOCTL_COMMAND(target, CDROMMULTISESSION)
    #endif
    #ifdef CDROM_GET_UPC
    ADD_IOCTL_COMMAND(target, CDROM_GET_UPC)
    #endif
    #ifdef CDROMRESET
    ADD_IOCTL_COMMAND(target, CDROMRESET)
    #endif
    #ifdef CDROMVOLREAD
    ADD_IOCTL_COMMAND(target, CDROMVOLREAD)
    #endif
    #ifdef CDROMREADRAW
    ADD_IOCTL_COMMAND(target, CDROMREADRAW)
    #endif
    #ifdef CDROMREADCOOKED
    ADD_IOCTL_COMMAND(target, CDROMREADCOOKED)
    #endif
    #ifdef CDROMSEEK
    ADD_IOCTL_COMMAND(target, CDROMSEEK)
    #endif
    #ifdef CM
    ADD_IOCTL_COMMAND(target, CM)
    #endif
    #ifdef CM
    ADD_IOCTL_COMMAND(target, CM)
    #endif
    #ifdef CYGETMON
    ADD_IOCTL_COMMAND(target, CYGETMON)
    #endif
    #ifdef CYGETTHRESH
    ADD_IOCTL_COMMAND(target, CYGETTHRESH)
    #endif
    #ifdef CYSETTHRESH
    ADD_IOCTL_COMMAND(target, CYSETTHRESH)
    #endif
    #ifdef CYGETDEFTHRESH
    ADD_IOCTL_COMMAND(target, CYGETDEFTHRESH)
    #endif
    #ifdef CYSETDEFTHRESH
    ADD_IOCTL_COMMAND(target, CYSETDEFTHRESH)
    #endif
    #ifdef CYGETTIMEOUT
    ADD_IOCTL_COMMAND(target, CYGETTIMEOUT)
    #endif
    #ifdef CYSETTIMEOUT
    ADD_IOCTL_COMMAND(target, CYSETTIMEOUT)
    #endif
    #ifdef CYGETDEFTIMEOUT
    ADD_IOCTL_COMMAND(target, CYGETDEFTIMEOUT)
    #endif
    #ifdef CYSETDEFTIMEOUT
    ADD_IOCTL_COMMAND(target, CYSETDEFTIMEOUT)
    #endif
    #ifdef FDCLRPRM
    ADD_IOCTL_COMMAND(target, FDCLRPRM)
    #endif
    #ifdef FDSETPRM
    ADD_IOCTL_COMMAND(target, FDSETPRM)
    #endif
    #ifdef FDDEFPRM
    ADD_IOCTL_COMMAND(target, FDDEFPRM)
    #endif
    #ifdef FDGETPRM
    ADD_IOCTL_COMMAND(target, FDGETPRM)
    #endif
    #ifdef FDMSGON
    ADD_IOCTL_COMMAND(target, FDMSGON)
    #endif
    #ifdef FDMSGOFF
    ADD_IOCTL_COMMAND(target, FDMSGOFF)
    #endif
    #ifdef FDFMTBEG
    ADD_IOCTL_COMMAND(target, FDFMTBEG)
    #endif
    #ifdef FDFMTTRK
    ADD_IOCTL_COMMAND(target, FDFMTTRK)
    #endif
    #ifdef FDFMTEND
    ADD_IOCTL_COMMAND(target, FDFMTEND)
    #endif
    #ifdef FDSETEMSGTRESH
    ADD_IOCTL_COMMAND(target, FDSETEMSGTRESH)
    #endif
    #ifdef FDFLUSH
    ADD_IOCTL_COMMAND(target, FDFLUSH)
    #endif
    #ifdef FDSETMAXERRS
    ADD_IOCTL_COMMAND(target, FDSETMAXERRS)
    #endif
    #ifdef FDGETMAXERRS
    ADD_IOCTL_COMMAND(target, FDGETMAXERRS)
    #endif
    #ifdef FDGETDRVTYP
    ADD_IOCTL_COMMAND(target, FDGETDRVTYP)
    #endif
    #ifdef FDSETDRVPRM
    ADD_IOCTL_COMMAND(target, FDSETDRVPRM)
    #endif
    #ifdef FDGETDRVPRM
    ADD_IOCTL_COMMAND(target, FDGETDRVPRM)
    #endif
    #ifdef FDGETDRVSTAT
    ADD_IOCTL_COMMAND(target, FDGETDRVSTAT)
    #endif
    #ifdef FDPOLLDRVSTAT
    ADD_IOCTL_COMMAND(target, FDPOLLDRVSTAT)
    #endif
    #ifdef FDRESET
    ADD_IOCTL_COMMAND(target, FDRESET)
    #endif
    #ifdef FDGETFDCSTAT
    ADD_IOCTL_COMMAND(target, FDGETFDCSTAT)
    #endif
    #ifdef FDWERRORCLR
    ADD_IOCTL_COMMAND(target, FDWERRORCLR)
    #endif
    #ifdef FDWERRORGET
    ADD_IOCTL_COMMAND(target, FDWERRORGET)
    #endif
    #ifdef FDRAWCMD
    ADD_IOCTL_COMMAND(target, FDRAWCMD)
    #endif
    #ifdef FDTWADDLE
    ADD_IOCTL_COMMAND(target, FDTWADDLE)
    #endif
    #ifdef BLKROSET
    ADD_IOCTL_COMMAND(target, BLKROSET)
    #endif
    #ifdef BLKROGET
    ADD_IOCTL_COMMAND(target, BLKROGET)
    #endif
    #ifdef BLKRRPART
    ADD_IOCTL_COMMAND(target, BLKRRPART)
    #endif
    #ifdef BLKGETSIZE
    ADD_IOCTL_COMMAND(target, BLKGETSIZE)
    #endif
    #ifdef BLKFLSBUF
    ADD_IOCTL_COMMAND(target, BLKFLSBUF)
    #endif
    #ifdef BLKRASET
    ADD_IOCTL_COMMAND(target, BLKRASET)
    #endif
    #ifdef BLKRAGET
    ADD_IOCTL_COMMAND(target, BLKRAGET)
    #endif
    #ifdef FIBMAP
    ADD_IOCTL_COMMAND(target, FIBMAP)
    #endif
    #ifdef FIGETBSZ
    ADD_IOCTL_COMMAND(target, FIGETBSZ)
    #endif
    #ifdef FS_IOC_GETFLAGS
    ADD_IOCTL_COMMAND(target, FS_IOC_GETFLAGS)
    #endif
    #ifdef FS_IOC_SETFLAGS
    ADD_IOCTL_COMMAND(target, FS_IOC_SETFLAGS)
    #endif
    #ifdef FS_IOC_GETVERSION
    ADD_IOCTL_COMMAND(target, FS_IOC_GETVERSION)
    #endif
    #ifdef FS_IOC_SETVERSION
    ADD_IOCTL_COMMAND(target, FS_IOC_SETVERSION)
    #endif
    #ifdef FS_IOC_FIEMAP
    ADD_IOCTL_COMMAND(target, FS_IOC_FIEMAP)
    #endif
    #ifdef FS_IOC
    ADD_IOCTL_COMMAND(target, FS_IOC)
    #endif
    #ifdef FS_IOC
    ADD_IOCTL_COMMAND(target, FS_IOC)
    #endif
    #ifdef FS_IOC
    ADD_IOCTL_COMMAND(target, FS_IOC)
    #endif
    #ifdef FS_IOC
    ADD_IOCTL_COMMAND(target, FS_IOC)
    #endif
    #ifdef HDIO_GETGEO
    ADD_IOCTL_COMMAND(target, HDIO_GETGEO)
    #endif
    #ifdef HDIO_GET_UNMASKINTR
    ADD_IOCTL_COMMAND(target, HDIO_GET_UNMASKINTR)
    #endif
    #ifdef HDIO_GET_MULTCOUNT
    ADD_IOCTL_COMMAND(target, HDIO_GET_MULTCOUNT)
    #endif
    #ifdef HDIO_GET_IDENTITY
    ADD_IOCTL_COMMAND(target, HDIO_GET_IDENTITY)
    #endif
    #ifdef HDIO_GET_KEEPSETTINGS
    ADD_IOCTL_COMMAND(target, HDIO_GET_KEEPSETTINGS)
    #endif
    #ifdef HDIO_GET_CHIPSET
    ADD_IOCTL_COMMAND(target, HDIO_GET_CHIPSET)
    #endif
    #ifdef HDIO_GET_NOWERR
    ADD_IOCTL_COMMAND(target, HDIO_GET_NOWERR)
    #endif
    #ifdef HDIO_GET_DMA
    ADD_IOCTL_COMMAND(target, HDIO_GET_DMA)
    #endif
    #ifdef HDIO_DRIVE_CMD
    ADD_IOCTL_COMMAND(target, HDIO_DRIVE_CMD)
    #endif
    #ifdef HDIO_SET_MULTCOUNT
    ADD_IOCTL_COMMAND(target, HDIO_SET_MULTCOUNT)
    #endif
    #ifdef HDIO_SET_UNMASKINTR
    ADD_IOCTL_COMMAND(target, HDIO_SET_UNMASKINTR)
    #endif
    #ifdef HDIO_SET_KEEPSETTINGS
    ADD_IOCTL_COMMAND(target, HDIO_SET_KEEPSETTINGS)
    #endif
    #ifdef HDIO_SET_CHIPSET
    ADD_IOCTL_COMMAND(target, HDIO_SET_CHIPSET)
    #endif
    #ifdef HDIO_SET_NOWERR
    ADD_IOCTL_COMMAND(target, HDIO_SET_NOWERR)
    #endif
    #ifdef HDIO_SET_DMA
    ADD_IOCTL_COMMAND(target, HDIO_SET_DMA)
    #endif
    #ifdef EQL_ENSLAVE
    ADD_IOCTL_COMMAND(target, EQL_ENSLAVE)
    #endif
    #ifdef EQL_EMANCIPATE
    ADD_IOCTL_COMMAND(target, EQL_EMANCIPATE)
    #endif
    #ifdef EQL_GETSLAVECFG
    ADD_IOCTL_COMMAND(target, EQL_GETSLAVECFG)
    #endif
    #ifdef EQL_SETSLAVECFG
    ADD_IOCTL_COMMAND(target, EQL_SETSLAVECFG)
    #endif
    #ifdef EQL_GETMASTRCFG
    ADD_IOCTL_COMMAND(target, EQL_GETMASTRCFG)
    #endif
    #ifdef EQL_SETMASTRCFG
    ADD_IOCTL_COMMAND(target, EQL_SETMASTRCFG)
    #endif
    #ifdef SIOCDEVPLIP
    ADD_IOCTL_COMMAND(target, SIOCDEVPLIP)
    #endif
    #ifdef PPPIOCGFLAGS
    ADD_IOCTL_COMMAND(target, PPPIOCGFLAGS)
    #endif
    #ifdef PPPIOCSFLAGS
    ADD_IOCTL_COMMAND(target, PPPIOCSFLAGS)
    #endif
    #ifdef PPPIOCGASYNCMAP
    ADD_IOCTL_COMMAND(target, PPPIOCGASYNCMAP)
    #endif
    #ifdef PPPIOCSASYNCMAP
    ADD_IOCTL_COMMAND(target, PPPIOCSASYNCMAP)
    #endif
    #ifdef PPPIOCGUNIT
    ADD_IOCTL_COMMAND(target, PPPIOCGUNIT)
    #endif
    #ifdef PPPIOCSINPSIG
    ADD_IOCTL_COMMAND(target, PPPIOCSINPSIG)
    #endif
    #ifdef PPPIOCSDEBUG
    ADD_IOCTL_COMMAND(target, PPPIOCSDEBUG)
    #endif
    #ifdef PPPIOCGDEBUG
    ADD_IOCTL_COMMAND(target, PPPIOCGDEBUG)
    #endif
    #ifdef PPPIOCGSTAT
    ADD_IOCTL_COMMAND(target, PPPIOCGSTAT)
    #endif
    #ifdef PPPIOCGTIME
    ADD_IOCTL_COMMAND(target, PPPIOCGTIME)
    #endif
    #ifdef PPPIOCGXASYNCMAP
    ADD_IOCTL_COMMAND(target, PPPIOCGXASYNCMAP)
    #endif
    #ifdef PPPIOCSXASYNCMAP
    ADD_IOCTL_COMMAND(target, PPPIOCSXASYNCMAP)
    #endif
    #ifdef PPPIOCSMRU
    ADD_IOCTL_COMMAND(target, PPPIOCSMRU)
    #endif
    #ifdef PPPIOCRASYNCMAP
    ADD_IOCTL_COMMAND(target, PPPIOCRASYNCMAP)
    #endif
    #ifdef PPPIOCSMAXCID
    ADD_IOCTL_COMMAND(target, PPPIOCSMAXCID)
    #endif
    #ifdef SIOCAIPXITFCRT
    ADD_IOCTL_COMMAND(target, SIOCAIPXITFCRT)
    #endif
    #ifdef SIOCAIPXPRISLT
    ADD_IOCTL_COMMAND(target, SIOCAIPXPRISLT)
    #endif
    #ifdef SIOCIPXCFGDATA
    ADD_IOCTL_COMMAND(target, SIOCIPXCFGDATA)
    #endif
    #ifdef GIO_FONT
    ADD_IOCTL_COMMAND(target, GIO_FONT)
    #endif
    #ifdef PIO_FONT
    ADD_IOCTL_COMMAND(target, PIO_FONT)
    #endif
    #ifdef GIO_FONTX
    ADD_IOCTL_COMMAND(target, GIO_FONTX)
    #endif
    #ifdef PIO_FONTX
    ADD_IOCTL_COMMAND(target, PIO_FONTX)
    #endif
    #ifdef GIO_CMAP
    ADD_IOCTL_COMMAND(target, GIO_CMAP)
    #endif
    #ifdef PIO_CMAP
    ADD_IOCTL_COMMAND(target, PIO_CMAP)
    #endif
    #ifdef KIOCSOUND
    ADD_IOCTL_COMMAND(target, KIOCSOUND)
    #endif
    #ifdef KDMKTONE
    ADD_IOCTL_COMMAND(target, KDMKTONE)
    #endif
    #ifdef KDGETLED
    ADD_IOCTL_COMMAND(target, KDGETLED)
    #endif
    #ifdef KDSETLED
    ADD_IOCTL_COMMAND(target, KDSETLED)
    #endif
    #ifdef KDGKBTYPE
    ADD_IOCTL_COMMAND(target, KDGKBTYPE)
    #endif
    #ifdef KDADDIO
    ADD_IOCTL_COMMAND(target, KDADDIO)
    #endif
    #ifdef KDDELIO
    ADD_IOCTL_COMMAND(target, KDDELIO)
    #endif
    #ifdef KDENABIO
    ADD_IOCTL_COMMAND(target, KDENABIO)
    #endif
    #ifdef KDDISABIO
    ADD_IOCTL_COMMAND(target, KDDISABIO)
    #endif
    #ifdef KDSETMODE
    ADD_IOCTL_COMMAND(target, KDSETMODE)
    #endif
    #ifdef KDGETMODE
    ADD_IOCTL_COMMAND(target, KDGETMODE)
    #endif
    #ifdef KDMAPDISP
    ADD_IOCTL_COMMAND(target, KDMAPDISP)
    #endif
    #ifdef KDUNMAPDISP
    ADD_IOCTL_COMMAND(target, KDUNMAPDISP)
    #endif
    #ifdef GIO_SCRNMAP
    ADD_IOCTL_COMMAND(target, GIO_SCRNMAP)
    #endif
    #ifdef PIO_SCRNMAP
    ADD_IOCTL_COMMAND(target, PIO_SCRNMAP)
    #endif
    #ifdef GIO_UNISCRNMAP
    ADD_IOCTL_COMMAND(target, GIO_UNISCRNMAP)
    #endif
    #ifdef PIO_UNISCRNMAP
    ADD_IOCTL_COMMAND(target, PIO_UNISCRNMAP)
    #endif
    #ifdef GIO_UNIMAP
    ADD_IOCTL_COMMAND(target, GIO_UNIMAP)
    #endif
    #ifdef PIO_UNIMAP
    ADD_IOCTL_COMMAND(target, PIO_UNIMAP)
    #endif
    #ifdef PIO_UNIMAPCLR
    ADD_IOCTL_COMMAND(target, PIO_UNIMAPCLR)
    #endif
    #ifdef KDGKBMODE
    ADD_IOCTL_COMMAND(target, KDGKBMODE)
    #endif
    #ifdef KDSKBMODE
    ADD_IOCTL_COMMAND(target, KDSKBMODE)
    #endif
    #ifdef KDGKBMETA
    ADD_IOCTL_COMMAND(target, KDGKBMETA)
    #endif
    #ifdef KDSKBMETA
    ADD_IOCTL_COMMAND(target, KDSKBMETA)
    #endif
    #ifdef KDGKBLED
    ADD_IOCTL_COMMAND(target, KDGKBLED)
    #endif
    #ifdef KDSKBLED
    ADD_IOCTL_COMMAND(target, KDSKBLED)
    #endif
    #ifdef KDGKBENT
    ADD_IOCTL_COMMAND(target, KDGKBENT)
    #endif
    #ifdef KDSKBENT
    ADD_IOCTL_COMMAND(target, KDSKBENT)
    #endif
    #ifdef KDGKBSENT
    ADD_IOCTL_COMMAND(target, KDGKBSENT)
    #endif
    #ifdef KDSKBSENT
    ADD_IOCTL_COMMAND(target, KDSKBSENT)
    #endif
    #ifdef KDGKBDIACR
    ADD_IOCTL_COMMAND(target, KDGKBDIACR)
    #endif
    #ifdef KDSKBDIACR
    ADD_IOCTL_COMMAND(target, KDSKBDIACR)
    #endif
    #ifdef KDGETKEYCODE
    ADD_IOCTL_COMMAND(target, KDGETKEYCODE)
    #endif
    #ifdef KDSETKEYCODE
    ADD_IOCTL_COMMAND(target, KDSETKEYCODE)
    #endif
    #ifdef KDSIGACCEPT
    ADD_IOCTL_COMMAND(target, KDSIGACCEPT)
    #endif
    #ifdef LPCHAR
    ADD_IOCTL_COMMAND(target, LPCHAR)
    #endif
    #ifdef LPTIME
    ADD_IOCTL_COMMAND(target, LPTIME)
    #endif
    #ifdef LPABORT
    ADD_IOCTL_COMMAND(target, LPABORT)
    #endif
    #ifdef LPSETIRQ
    ADD_IOCTL_COMMAND(target, LPSETIRQ)
    #endif
    #ifdef LPGETIRQ
    ADD_IOCTL_COMMAND(target, LPGETIRQ)
    #endif
    #ifdef LPWAIT
    ADD_IOCTL_COMMAND(target, LPWAIT)
    #endif
    #ifdef LPCAREFUL
    ADD_IOCTL_COMMAND(target, LPCAREFUL)
    #endif
    #ifdef LPABORTOPEN
    ADD_IOCTL_COMMAND(target, LPABORTOPEN)
    #endif
    #ifdef LPGETSTATUS
    ADD_IOCTL_COMMAND(target, LPGETSTATUS)
    #endif
    #ifdef LPRESET
    ADD_IOCTL_COMMAND(target, LPRESET)
    #endif
    #ifdef LPGETSTATS
    ADD_IOCTL_COMMAND(target, LPGETSTATS)
    #endif
    #ifdef SIOCGETVIFCNT
    ADD_IOCTL_COMMAND(target, SIOCGETVIFCNT)
    #endif
    #ifdef SIOCGETSGCNT
    ADD_IOCTL_COMMAND(target, SIOCGETSGCNT)
    #endif
    #ifdef VFAT_IOCTL_READDIR_BOTH
    ADD_IOCTL_COMMAND(target, VFAT_IOCTL_READDIR_BOTH)
    #endif
    #ifdef VFAT_IOCTL_READDIR_SHORT
    ADD_IOCTL_COMMAND(target, VFAT_IOCTL_READDIR_SHORT)
    #endif
    #ifdef FAT_IOCTL_GET_ATTRIBUTES
    ADD_IOCTL_COMMAND(target, FAT_IOCTL_GET_ATTRIBUTES)
    #endif
    #ifdef FAT_IOCTL_SET_ATTRIBUTES
    ADD_IOCTL_COMMAND(target, FAT_IOCTL_SET_ATTRIBUTES)
    #endif
    #ifdef FAT_IOCTL_GET_VOLUME_ID
    ADD_IOCTL_COMMAND(target, FAT_IOCTL_GET_VOLUME_ID)
    #endif
    #ifdef MTIOCTOP
    ADD_IOCTL_COMMAND(target, MTIOCTOP)
    #endif
    #ifdef MTIOCGET
    ADD_IOCTL_COMMAND(target, MTIOCGET)
    #endif
    #ifdef MTIOCPOS
    ADD_IOCTL_COMMAND(target, MTIOCPOS)
    #endif
    #ifdef MTIOCGETCONFIG
    ADD_IOCTL_COMMAND(target, MTIOCGETCONFIG)
    #endif
    #ifdef MTIOCSETCONFIG
    ADD_IOCTL_COMMAND(target, MTIOCSETCONFIG)
    #endif
    #ifdef SIOCNRGETPARMS
    ADD_IOCTL_COMMAND(target, SIOCNRGETPARMS)
    #endif
    #ifdef SIOCNRSETPARMS
    ADD_IOCTL_COMMAND(target, SIOCNRSETPARMS)
    #endif
    #ifdef SIOCNRDECOBS
    ADD_IOCTL_COMMAND(target, SIOCNRDECOBS)
    #endif
    #ifdef SIOCNRRTCTL
    ADD_IOCTL_COMMAND(target, SIOCNRRTCTL)
    #endif
    #ifdef DDIOCSDBG
    ADD_IOCTL_COMMAND(target, DDIOCSDBG)
    #endif
    #ifdef CDROMAUDIOBUFSIZ
    ADD_IOCTL_COMMAND(target, CDROMAUDIOBUFSIZ)
    #endif
    #ifdef TIOCSCCINI
    ADD_IOCTL_COMMAND(target, TIOCSCCINI)
    #endif
    #ifdef TIOCCHANINI
    ADD_IOCTL_COMMAND(target, TIOCCHANINI)
    #endif
    #ifdef TIOCGKISS
    ADD_IOCTL_COMMAND(target, TIOCGKISS)
    #endif
    #ifdef TIOCSKISS
    ADD_IOCTL_COMMAND(target, TIOCSKISS)
    #endif
    #ifdef TIOCSCCSTAT
    ADD_IOCTL_COMMAND(target, TIOCSCCSTAT)
    #endif
    #ifdef SCSI_IOCTL_GET_IDLUN
    ADD_IOCTL_COMMAND(target, SCSI_IOCTL_GET_IDLUN)
    #endif
    #ifdef SCSI_IOCTL_TAGGED_ENABLE
    ADD_IOCTL_COMMAND(target, SCSI_IOCTL_TAGGED_ENABLE)
    #endif
    #ifdef SCSI_IOCTL_TAGGED_DISABLE
    ADD_IOCTL_COMMAND(target, SCSI_IOCTL_TAGGED_DISABLE)
    #endif
    #ifdef SCSI_IOCTL_PROBE_HOST
    ADD_IOCTL_COMMAND(target, SCSI_IOCTL_PROBE_HOST)
    #endif
    #ifdef SMB_IOC_GETMOUNTUID
    ADD_IOCTL_COMMAND(target, SMB_IOC_GETMOUNTUID)
    #endif
    #ifdef SIOCADDRT
    ADD_IOCTL_COMMAND(target, SIOCADDRT)
    #endif
    #ifdef SIOCDELRT
    ADD_IOCTL_COMMAND(target, SIOCDELRT)
    #endif
    #ifdef SIOCGIFNAME
    ADD_IOCTL_COMMAND(target, SIOCGIFNAME)
    #endif
    #ifdef SIOCSIFLINK
    ADD_IOCTL_COMMAND(target, SIOCSIFLINK)
    #endif
    #ifdef SIOCGIFMEM
    ADD_IOCTL_COMMAND(target, SIOCGIFMEM)
    #endif
    #ifdef SIOCSIFMEM
    ADD_IOCTL_COMMAND(target, SIOCSIFMEM)
    #endif
    #ifdef OLD_SIOCGIFHWADDR
    ADD_IOCTL_COMMAND(target, OLD_SIOCGIFHWADDR)
    #endif
    #ifdef SIOCSIFHWADDR
    ADD_IOCTL_COMMAND(target, SIOCSIFHWADDR)
    #endif
    #ifdef SIOCGIFENCAP
    ADD_IOCTL_COMMAND(target, SIOCGIFENCAP)
    #endif
    #ifdef SIOCSIFENCAP
    ADD_IOCTL_COMMAND(target, SIOCSIFENCAP)
    #endif
    #ifdef SIOCGIFHWADDR
    ADD_IOCTL_COMMAND(target, SIOCGIFHWADDR)
    #endif
    #ifdef SIOCGIFSLAVE
    ADD_IOCTL_COMMAND(target, SIOCGIFSLAVE)
    #endif
    #ifdef SIOCSIFSLAVE
    ADD_IOCTL_COMMAND(target, SIOCSIFSLAVE)
    #endif
    #ifdef SIOCADDRTOLD
    ADD_IOCTL_COMMAND(target, SIOCADDRTOLD)
    #endif
    #ifdef SIOCDELRTOLD
    ADD_IOCTL_COMMAND(target, SIOCDELRTOLD)
    #endif
    #ifdef SIOCDARP
    ADD_IOCTL_COMMAND(target, SIOCDARP)
    #endif
    #ifdef SIOCGARP
    ADD_IOCTL_COMMAND(target, SIOCGARP)
    #endif
    #ifdef SIOCSARP
    ADD_IOCTL_COMMAND(target, SIOCSARP)
    #endif
    #ifdef SIOCDRARP
    ADD_IOCTL_COMMAND(target, SIOCDRARP)
    #endif
    #ifdef SIOCGRARP
    ADD_IOCTL_COMMAND(target, SIOCGRARP)
    #endif
    #ifdef SIOCSRARP
    ADD_IOCTL_COMMAND(target, SIOCSRARP)
    #endif
    #ifdef SIOCGIFMAP
    ADD_IOCTL_COMMAND(target, SIOCGIFMAP)
    #endif
    #ifdef SIOCSIFMAP
    ADD_IOCTL_COMMAND(target, SIOCSIFMAP)
    #endif
    #ifdef SNDCTL_SEQ_RESET
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_RESET)
    #endif
    #ifdef SNDCTL_SEQ_SYNC
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_SYNC)
    #endif
    #ifdef SNDCTL_SYNTH_INFO
    ADD_IOCTL_COMMAND(target, SNDCTL_SYNTH_INFO)
    #endif
    #ifdef SNDCTL_SEQ_CTRLRATE
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_CTRLRATE)
    #endif
    #ifdef SNDCTL_SEQ_GETOUTCOUNT
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_GETOUTCOUNT)
    #endif
    #ifdef SNDCTL_SEQ_GETINCOUNT
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_GETINCOUNT)
    #endif
    #ifdef SNDCTL_SEQ_PERCMODE
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_PERCMODE)
    #endif
    #ifdef SNDCTL_FM_LOAD_INSTR
    ADD_IOCTL_COMMAND(target, SNDCTL_FM_LOAD_INSTR)
    #endif
    #ifdef SNDCTL_SEQ_TESTMIDI
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_TESTMIDI)
    #endif
    #ifdef SNDCTL_SEQ_RESETSAMPLES
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_RESETSAMPLES)
    #endif
    #ifdef SNDCTL_SEQ_NRSYNTHS
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_NRSYNTHS)
    #endif
    #ifdef SNDCTL_SEQ_NRMIDIS
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_NRMIDIS)
    #endif
    #ifdef SNDCTL_MIDI_INFO
    ADD_IOCTL_COMMAND(target, SNDCTL_MIDI_INFO)
    #endif
    #ifdef SNDCTL_SEQ_THRESHOLD
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_THRESHOLD)
    #endif
    #ifdef SNDCTL_SYNTH_MEMAVL
    ADD_IOCTL_COMMAND(target, SNDCTL_SYNTH_MEMAVL)
    #endif
    #ifdef SNDCTL_FM_
    ADD_IOCTL_COMMAND(target, SNDCTL_FM_)
    #endif
    #ifdef SNDCTL_PMGR_ACCESS
    ADD_IOCTL_COMMAND(target, SNDCTL_PMGR_ACCESS)
    #endif
    #ifdef SNDCTL_SEQ_PANIC
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_PANIC)
    #endif
    #ifdef SNDCTL_SEQ_OUTOFBAND
    ADD_IOCTL_COMMAND(target, SNDCTL_SEQ_OUTOFBAND)
    #endif
    #ifdef SNDCTL_TMR_TIMEBASE
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_TIMEBASE)
    #endif
    #ifdef SNDCTL_TMR_START
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_START)
    #endif
    #ifdef SNDCTL_TMR_STOP
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_STOP)
    #endif
    #ifdef SNDCTL_TMR_CONTINUE
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_CONTINUE)
    #endif
    #ifdef SNDCTL_TMR_TEMPO
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_TEMPO)
    #endif
    #ifdef SNDCTL_TMR_SOURCE
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_SOURCE)
    #endif
    #ifdef SNDCTL_TMR_METRONOME
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_METRONOME)
    #endif
    #ifdef SNDCTL_TMR_SELECT
    ADD_IOCTL_COMMAND(target, SNDCTL_TMR_SELECT)
    #endif
    #ifdef SNDCTL_PMGR_IFACE
    ADD_IOCTL_COMMAND(target, SNDCTL_PMGR_IFACE)
    #endif
    #ifdef SNDCTL_MIDI_PRETIME
    ADD_IOCTL_COMMAND(target, SNDCTL_MIDI_PRETIME)
    #endif
    #ifdef SNDCTL_MIDI_MPUMODE
    ADD_IOCTL_COMMAND(target, SNDCTL_MIDI_MPUMODE)
    #endif
    #ifdef SNDCTL_MIDI_MPUCMD
    ADD_IOCTL_COMMAND(target, SNDCTL_MIDI_MPUCMD)
    #endif
    #ifdef SNDCTL_DSP_RESET
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_RESET)
    #endif
    #ifdef SNDCTL_DSP_SYNC
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_SYNC)
    #endif
    #ifdef SNDCTL_DSP_SPEED
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_SPEED)
    #endif
    #ifdef SNDCTL_DSP_STEREO
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_STEREO)
    #endif
    #ifdef SNDCTL_DSP_GETBLKSIZE
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_GETBLKSIZE)
    #endif
    #ifdef SOUND_PCM_WRITE_CHANNELS
    ADD_IOCTL_COMMAND(target, SOUND_PCM_WRITE_CHANNELS)
    #endif
    #ifdef SOUND_PCM_WRITE_FILTER
    ADD_IOCTL_COMMAND(target, SOUND_PCM_WRITE_FILTER)
    #endif
    #ifdef SNDCTL_DSP_POST
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_POST)
    #endif
    #ifdef SNDCTL_DSP_SUBDIVIDE
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_SUBDIVIDE)
    #endif
    #ifdef SNDCTL_DSP_SETFRAGMENT
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_SETFRAGMENT)
    #endif
    #ifdef SNDCTL_DSP_GETFMTS
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_GETFMTS)
    #endif
    #ifdef SNDCTL_DSP_SETFMT
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_SETFMT)
    #endif
    #ifdef SNDCTL_DSP_GETOSPACE
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_GETOSPACE)
    #endif
    #ifdef SNDCTL_DSP_GETISPACE
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_GETISPACE)
    #endif
    #ifdef SNDCTL_DSP_NONBLOCK
    ADD_IOCTL_COMMAND(target, SNDCTL_DSP_NONBLOCK)
    #endif
    #ifdef SOUND_PCM_READ_RATE
    ADD_IOCTL_COMMAND(target, SOUND_PCM_READ_RATE)
    #endif
    #ifdef SOUND_PCM_READ_CHANNELS
    ADD_IOCTL_COMMAND(target, SOUND_PCM_READ_CHANNELS)
    #endif
    #ifdef SOUND_PCM_READ_BITS
    ADD_IOCTL_COMMAND(target, SOUND_PCM_READ_BITS)
    #endif
    #ifdef SOUND_PCM_READ_FILTER
    ADD_IOCTL_COMMAND(target, SOUND_PCM_READ_FILTER)
    #endif
    #ifdef SNDCTL_COPR_RESET
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_RESET)
    #endif
    #ifdef SNDCTL_COPR_LOAD
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_LOAD)
    #endif
    #ifdef SNDCTL_COPR_RDATA
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_RDATA)
    #endif
    #ifdef SNDCTL_COPR_RCODE
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_RCODE)
    #endif
    #ifdef SNDCTL_COPR_WDATA
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_WDATA)
    #endif
    #ifdef SNDCTL_COPR_WCODE
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_WCODE)
    #endif
    #ifdef SNDCTL_COPR_RUN
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_RUN)
    #endif
    #ifdef SNDCTL_COPR_HALT
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_HALT)
    #endif
    #ifdef SNDCTL_COPR_SENDMSG
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_SENDMSG)
    #endif
    #ifdef SNDCTL_COPR_RCVMSG
    ADD_IOCTL_COMMAND(target, SNDCTL_COPR_RCVMSG)
    #endif
    #ifdef SOUND_MIXER_READ_VOLUME
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_VOLUME)
    #endif
    #ifdef SOUND_MIXER_READ_BASS
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_BASS)
    #endif
    #ifdef SOUND_MIXER_READ_TREBLE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_TREBLE)
    #endif
    #ifdef SOUND_MIXER_READ_SYNTH
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_SYNTH)
    #endif
    #ifdef SOUND_MIXER_READ_PCM
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_PCM)
    #endif
    #ifdef SOUND_MIXER_READ_SPEAKER
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_SPEAKER)
    #endif
    #ifdef SOUND_MIXER_READ_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_LINE)
    #endif
    #ifdef SOUND_MIXER_READ_MIC
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_MIC)
    #endif
    #ifdef SOUND_MIXER_READ_CD
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_CD)
    #endif
    #ifdef SOUND_MIXER_READ_IMIX
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_IMIX)
    #endif
    #ifdef SOUND_MIXER_READ_ALTPCM
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_ALTPCM)
    #endif
    #ifdef SOUND_MIXER_READ_RECLEV
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_RECLEV)
    #endif
    #ifdef SOUND_MIXER_READ_IGAIN
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_IGAIN)
    #endif
    #ifdef SOUND_MIXER_READ_OGAIN
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_OGAIN)
    #endif
    #ifdef SOUND_MIXER_READ_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_LINE)
    #endif
    #ifdef SOUND_MIXER_READ_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_LINE)
    #endif
    #ifdef SOUND_MIXER_READ_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_LINE)
    #endif
    #ifdef SOUND_MIXER_READ_MUTE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_MUTE)
    #endif
    #ifdef SOUND_MIXER_READ_ENHANCE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_ENHANCE)
    #endif
    #ifdef SOUND_MIXER_READ_LOUD
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_LOUD)
    #endif
    #ifdef SOUND_MIXER_READ_RECSRC
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_RECSRC)
    #endif
    #ifdef SOUND_MIXER_READ_DEVMASK
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_DEVMASK)
    #endif
    #ifdef SOUND_MIXER_READ_RECMASK
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_RECMASK)
    #endif
    #ifdef SOUND_MIXER_READ_STEREODEVS
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_STEREODEVS)
    #endif
    #ifdef SOUND_MIXER_READ_CAPS
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_READ_CAPS)
    #endif
    #ifdef SOUND_MIXER_WRITE_VOLUME
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_VOLUME)
    #endif
    #ifdef SOUND_MIXER_WRITE_BASS
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_BASS)
    #endif
    #ifdef SOUND_MIXER_WRITE_TREBLE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_TREBLE)
    #endif
    #ifdef SOUND_MIXER_WRITE_SYNTH
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_SYNTH)
    #endif
    #ifdef SOUND_MIXER_WRITE_PCM
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_PCM)
    #endif
    #ifdef SOUND_MIXER_WRITE_SPEAKER
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_SPEAKER)
    #endif
    #ifdef SOUND_MIXER_WRITE_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_LINE)
    #endif
    #ifdef SOUND_MIXER_WRITE_MIC
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_MIC)
    #endif
    #ifdef SOUND_MIXER_WRITE_CD
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_CD)
    #endif
    #ifdef SOUND_MIXER_WRITE_IMIX
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_IMIX)
    #endif
    #ifdef SOUND_MIXER_WRITE_ALTPCM
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_ALTPCM)
    #endif
    #ifdef SOUND_MIXER_WRITE_RECLEV
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_RECLEV)
    #endif
    #ifdef SOUND_MIXER_WRITE_IGAIN
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_IGAIN)
    #endif
    #ifdef SOUND_MIXER_WRITE_OGAIN
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_OGAIN)
    #endif
    #ifdef SOUND_MIXER_WRITE_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_LINE)
    #endif
    #ifdef SOUND_MIXER_WRITE_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_LINE)
    #endif
    #ifdef SOUND_MIXER_WRITE_LINE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_LINE)
    #endif
    #ifdef SOUND_MIXER_WRITE_MUTE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_MUTE)
    #endif
    #ifdef SOUND_MIXER_WRITE_ENHANCE
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_ENHANCE)
    #endif
    #ifdef SOUND_MIXER_WRITE_LOUD
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_LOUD)
    #endif
    #ifdef SOUND_MIXER_WRITE_RECSRC
    ADD_IOCTL_COMMAND(target, SOUND_MIXER_WRITE_RECSRC)
    #endif
    #ifdef TFD_IOC_SET_TICKS
    ADD_IOCTL_COMMAND(target, TFD_IOC_SET_TICKS)
    #endif
    #ifdef UMSDOS_READDIR_DOS
    ADD_IOCTL_COMMAND(target, UMSDOS_READDIR_DOS)
    #endif
    #ifdef UMSDOS_UNLINK_DOS
    ADD_IOCTL_COMMAND(target, UMSDOS_UNLINK_DOS)
    #endif
    #ifdef UMSDOS_RMDIR_DOS
    ADD_IOCTL_COMMAND(target, UMSDOS_RMDIR_DOS)
    #endif
    #ifdef UMSDOS_STAT_DOS
    ADD_IOCTL_COMMAND(target, UMSDOS_STAT_DOS)
    #endif
    #ifdef UMSDOS_CREAT_EMD
    ADD_IOCTL_COMMAND(target, UMSDOS_CREAT_EMD)
    #endif
    #ifdef UMSDOS_UNLINK_EMD
    ADD_IOCTL_COMMAND(target, UMSDOS_UNLINK_EMD)
    #endif
    #ifdef UMSDOS_READDIR_EMD
    ADD_IOCTL_COMMAND(target, UMSDOS_READDIR_EMD)
    #endif
    #ifdef UMSDOS_GETVERSION
    ADD_IOCTL_COMMAND(target, UMSDOS_GETVERSION)
    #endif
    #ifdef UMSDOS_INIT_EMD
    ADD_IOCTL_COMMAND(target, UMSDOS_INIT_EMD)
    #endif
    #ifdef UMSDOS_DOS_SETUP
    ADD_IOCTL_COMMAND(target, UMSDOS_DOS_SETUP)
    #endif
    #ifdef UMSDOS_RENAME_DOS
    ADD_IOCTL_COMMAND(target, UMSDOS_RENAME_DOS)
    #endif
    #ifdef VT_OPENQRY
    ADD_IOCTL_COMMAND(target, VT_OPENQRY)
    #endif
    #ifdef VT_GETMODE
    ADD_IOCTL_COMMAND(target, VT_GETMODE)
    #endif
    #ifdef VT_SETMODE
    ADD_IOCTL_COMMAND(target, VT_SETMODE)
    #endif
    #ifdef VT_GETSTATE
    ADD_IOCTL_COMMAND(target, VT_GETSTATE)
    #endif
    #ifdef VT_SENDSIG
    ADD_IOCTL_COMMAND(target, VT_SENDSIG)
    #endif
    #ifdef VT_RELDISP
    ADD_IOCTL_COMMAND(target, VT_RELDISP)
    #endif
    #ifdef VT_ACTIVATE
    ADD_IOCTL_COMMAND(target, VT_ACTIVATE)
    #endif
    #ifdef VT_WAITACTIVE
    ADD_IOCTL_COMMAND(target, VT_WAITACTIVE)
    #endif
    #ifdef VT_DISALLOCATE
    ADD_IOCTL_COMMAND(target, VT_DISALLOCATE)
    #endif
    #ifdef VT_RESIZE
    ADD_IOCTL_COMMAND(target, VT_RESIZE)
    #endif
    #ifdef VT_RESIZEX
    ADD_IOCTL_COMMAND(target, VT_RESIZEX)
    #endif

    return target;
}

void InitAll(Local<Object> exports) {
    exports->Set(Nan::New("list").ToLocalChecked(), get_list());
}

NODE_MODULE(ioctlList, InitAll)
