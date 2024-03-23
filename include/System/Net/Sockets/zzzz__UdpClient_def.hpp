#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UdpClient)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class __UdpClient____c__DisplayClass64_0;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Sockets {
class UdpClient;
}
namespace System::Net::Sockets {
class __UdpClient____c__DisplayClass64_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::UdpClient);
MARK_REF_PTR_T(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0);
// Type: ::<>c__DisplayClass64_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::UdpClient::<>c__DisplayClass64_0*
class CORDL_TYPE __UdpClient____c__DisplayClass64_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Net::Sockets::UdpClient* __4__this;

  /// @brief Field bytes, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes)) int32_t bytes;

  /// @brief Field datagram, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_datagram, put = __cordl_internal_set_datagram))::ArrayW<uint8_t, ::Array<uint8_t>*> datagram;

  /// @brief Field hostname, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hostname, put = __cordl_internal_set_hostname))::StringW hostname;

  /// @brief Field port, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  static inline ::System::Net::Sockets::__UdpClient____c__DisplayClass64_0* New_ctor();

  /// @brief Method <SendAsync>b__0, addr 0x2c8f6a4, size 0x34, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* _SendAsync_b__0(::System::AsyncCallback* callback, ::System::Object* state);

  constexpr ::System::Net::Sockets::UdpClient*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::UdpClient*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get_bytes() const;

  constexpr int32_t& __cordl_internal_get_bytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_datagram() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_datagram();

  constexpr ::StringW const& __cordl_internal_get_hostname() const;

  constexpr ::StringW& __cordl_internal_get_hostname();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr void __cordl_internal_set___4__this(::System::Net::Sockets::UdpClient* value);

  constexpr void __cordl_internal_set_bytes(int32_t value);

  constexpr void __cordl_internal_set_datagram(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_hostname(::StringW value);

  constexpr void __cordl_internal_set_port(int32_t value);

  /// @brief Method .ctor, addr 0x2c8f69c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UdpClient____c__DisplayClass64_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UdpClient____c__DisplayClass64_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UdpClient____c__DisplayClass64_0(__UdpClient____c__DisplayClass64_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UdpClient____c__DisplayClass64_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UdpClient____c__DisplayClass64_0(__UdpClient____c__DisplayClass64_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::UdpClient* _____4__this;

  /// @brief Field datagram, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___datagram;

  /// @brief Field bytes, offset: 0x20, size: 0x4, def value: None
  int32_t ___bytes;

  /// @brief Field hostname, offset: 0x28, size: 0x8, def value: None
  ::StringW ___hostname;

  /// @brief Field port, offset: 0x30, size: 0x4, def value: None
  int32_t ___port;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__UdpClient____c__DisplayClass64_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0, ___datagram) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0, ___bytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0, ___hostname) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0, ___port) == 0x30, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: System.Net.Sockets::UdpClient
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 46, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::System.Net.Sockets::UdpClient*
class CORDL_TYPE UdpClient : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass64_0 = ::System::Net::Sockets::__UdpClient____c__DisplayClass64_0;

  __declspec(property(get = get_Client, put = set_Client))::System::Net::Sockets::Socket* Client;

  /// @brief Field m_Active, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Field m_Buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buffer, put = __cordl_internal_set_m_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> m_Buffer;

  /// @brief Field m_CleanedUp, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CleanedUp, put = __cordl_internal_set_m_CleanedUp)) bool m_CleanedUp;

  /// @brief Field m_ClientSocket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClientSocket, put = __cordl_internal_set_m_ClientSocket))::System::Net::Sockets::Socket* m_ClientSocket;

  /// @brief Field m_Family, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Family, put = __cordl_internal_set_m_Family))::System::Net::Sockets::AddressFamily m_Family;

  /// @brief Field m_IsBroadcast, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsBroadcast, put = __cordl_internal_set_m_IsBroadcast)) bool m_IsBroadcast;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginSend, addr 0x2c8f038, size 0x21c, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginSend(::ArrayW<uint8_t, ::Array<uint8_t>*> datagram, int32_t bytes, ::System::Net::IPEndPoint* endPoint, ::System::AsyncCallback* requestCallback,
                                           ::System::Object* state);

  /// @brief Method BeginSend, addr 0x2c8f254, size 0x220, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginSend(::ArrayW<uint8_t, ::Array<uint8_t>*> datagram, int32_t bytes, ::StringW hostname, int32_t port, ::System::AsyncCallback* requestCallback,
                                           ::System::Object* state);

  /// @brief Method CheckForBroadcast, addr 0x2c8ef4c, size 0x58, virtual false, abstract: false, final false
  inline void CheckForBroadcast(::System::Net::IPAddress* ipAddress);

  /// @brief Method Dispose, addr 0x2c8eec4, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2c8eed4, size 0x78, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndSend, addr 0x2c8f474, size 0xb4, virtual false, abstract: false, final false
  inline int32_t EndSend(::System::IAsyncResult* asyncResult);

  /// @brief Method FreeResources, addr 0x2c8ee74, size 0x50, virtual false, abstract: false, final false
  inline void FreeResources();

  /// @brief Method IsBroadcast, addr 0x2c8efa4, size 0x94, virtual false, abstract: false, final false
  static inline bool IsBroadcast(::System::Net::IPAddress* address);

  static inline ::System::Net::Sockets::UdpClient* New_ctor();

  static inline ::System::Net::Sockets::UdpClient* New_ctor(::System::Net::Sockets::AddressFamily family);

  /// @brief Method SendAsync, addr 0x2c8f528, size 0x174, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* SendAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> datagram, int32_t bytes, ::StringW hostname, int32_t port);

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_Buffer();

  constexpr bool const& __cordl_internal_get_m_CleanedUp() const;

  constexpr bool& __cordl_internal_get_m_CleanedUp();

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_m_ClientSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_m_ClientSocket() const;

  constexpr ::System::Net::Sockets::AddressFamily const& __cordl_internal_get_m_Family() const;

  constexpr ::System::Net::Sockets::AddressFamily& __cordl_internal_get_m_Family();

  constexpr bool const& __cordl_internal_get_m_IsBroadcast() const;

  constexpr bool& __cordl_internal_get_m_IsBroadcast();

  constexpr void __cordl_internal_set_m_Active(bool value);

  constexpr void __cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_CleanedUp(bool value);

  constexpr void __cordl_internal_set_m_ClientSocket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily value);

  constexpr void __cordl_internal_set_m_IsBroadcast(bool value);

  /// @brief Method .ctor, addr 0x2c8eca8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2c8ecb0, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::AddressFamily family);

  /// @brief Method createClientSocket, addr 0x2c8edf4, size 0x70, virtual false, abstract: false, final false
  inline void createClientSocket();

  /// @brief Method get_Client, addr 0x2c8ee64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* get_Client();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Client, addr 0x2c8ee6c, size 0x8, virtual false, abstract: false, final false
  inline void set_Client(::System::Net::Sockets::Socket* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UdpClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UdpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UdpClient(UdpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UdpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UdpClient(UdpClient const&) = delete;

  /// @brief Field m_ClientSocket, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___m_ClientSocket;

  /// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
  bool ___m_Active;

  /// @brief Field m_Buffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_Buffer;

  /// @brief Field m_Family, offset: 0x28, size: 0x4, def value: None
  ::System::Net::Sockets::AddressFamily ___m_Family;

  /// @brief Field m_CleanedUp, offset: 0x2c, size: 0x1, def value: None
  bool ___m_CleanedUp;

  /// @brief Field m_IsBroadcast, offset: 0x2d, size: 0x1, def value: None
  bool ___m_IsBroadcast;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::UdpClient, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_ClientSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_Active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_Buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_Family) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_CleanedUp) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_IsBroadcast) == 0x2d, "Offset mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::UdpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::UdpClient*, "System.Net.Sockets", "UdpClient");
NEED_NO_BOX(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__UdpClient____c__DisplayClass64_0*, "System.Net.Sockets", "UdpClient/<>c__DisplayClass64_0");
