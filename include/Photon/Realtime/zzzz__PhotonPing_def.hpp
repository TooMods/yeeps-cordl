#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonPing)
namespace System {
class IDisposable;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Photon::Realtime {
class PhotonPing;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::PhotonPing);
// Type: Photon.Realtime::PhotonPing
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::PhotonPing*
class CORDL_TYPE PhotonPing : public ::System::Object {
public:
  // Declarations
  /// @brief Field DebugString, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DebugString, put = __cordl_internal_set_DebugString))::StringW DebugString;

  /// @brief Field GotResult, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_GotResult, put = __cordl_internal_set_GotResult)) bool GotResult;

  /// @brief Field PingBytes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PingBytes, put = __cordl_internal_set_PingBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> PingBytes;

  /// @brief Field PingId, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_PingId, put = __cordl_internal_set_PingId)) uint8_t PingId;

  /// @brief Field PingLength, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_PingLength, put = __cordl_internal_set_PingLength)) int32_t PingLength;

  /// @brief Field RandomIdProvider, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RandomIdProvider, put = setStaticF_RandomIdProvider))::System::Random* RandomIdProvider;

  /// @brief Field Successful, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Successful, put = __cordl_internal_set_Successful)) bool Successful;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x22485fc, size 0x40, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Done, addr 0x22485bc, size 0x40, virtual true, abstract: false, final false
  inline bool Done();

  /// @brief Method Init, addr 0x224863c, size 0x7c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Photon::Realtime::PhotonPing* New_ctor();

  /// @brief Method StartPing, addr 0x224857c, size 0x40, virtual true, abstract: false, final false
  inline bool StartPing(::StringW ip);

  constexpr ::StringW const& __cordl_internal_get_DebugString() const;

  constexpr ::StringW& __cordl_internal_get_DebugString();

  constexpr bool const& __cordl_internal_get_GotResult() const;

  constexpr bool& __cordl_internal_get_GotResult();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_PingBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_PingBytes();

  constexpr uint8_t const& __cordl_internal_get_PingId() const;

  constexpr uint8_t& __cordl_internal_get_PingId();

  constexpr int32_t const& __cordl_internal_get_PingLength() const;

  constexpr int32_t& __cordl_internal_get_PingLength();

  constexpr bool const& __cordl_internal_get_Successful() const;

  constexpr bool& __cordl_internal_get_Successful();

  constexpr void __cordl_internal_set_DebugString(::StringW value);

  constexpr void __cordl_internal_set_GotResult(bool value);

  constexpr void __cordl_internal_set_PingBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_PingId(uint8_t value);

  constexpr void __cordl_internal_set_PingLength(int32_t value);

  constexpr void __cordl_internal_set_Successful(bool value);

  /// @brief Method .ctor, addr 0x22486b8, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Random* getStaticF_RandomIdProvider();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_RandomIdProvider(::System::Random* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonPing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonPing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonPing(PhotonPing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonPing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonPing(PhotonPing const&) = delete;

  /// @brief Field DebugString, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DebugString;

  /// @brief Field Successful, offset: 0x18, size: 0x1, def value: None
  bool ___Successful;

  /// @brief Field GotResult, offset: 0x19, size: 0x1, def value: None
  bool ___GotResult;

  /// @brief Field PingLength, offset: 0x1c, size: 0x4, def value: None
  int32_t ___PingLength;

  /// @brief Field PingBytes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___PingBytes;

  /// @brief Field PingId, offset: 0x28, size: 0x1, def value: None
  uint8_t ___PingId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::PhotonPing, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPing, ___DebugString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPing, ___Successful) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPing, ___GotResult) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPing, ___PingLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPing, ___PingBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPing, ___PingId) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::PhotonPing);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::PhotonPing*, "Photon.Realtime", "PhotonPing");
