#include <windows.h>
#include <wchar.h>
#include <lm.h>

int main() {
    NET_API_STATUS status;
    NETSETUP_JOIN_STATUS joinStatus;
    WCHAR* domainName = L"DOMAIN";
    WCHAR* userName = L"Administrator";
    WCHAR* password = L"";
    WCHAR* serverName = NULL; // Set this to NULL if not needed

    status = NetJoinDomain(serverName, domainName, NULL, userName, password, NETSETUP_JOIN_DOMAIN);

    if (status == NERR_Success) {
        wprintf(L"Computer joined to the domain successfully.\n");
    } else {
        wprintf(L"Error joining the domain. Error code: %d\n", status);
    }

    return 0;
}
