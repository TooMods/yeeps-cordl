#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VxTokenGen)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VxTokenGen;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VxTokenGen);
// Type: Unity.Services.Vivox::VxTokenGen
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VxTokenGen*
class CORDL_TYPE VxTokenGen : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IssuerKey, put = set_IssuerKey))::StringW IssuerKey;

  /// @brief Field key, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_key, put = setStaticF_key))::StringW key;

  /// @brief Field serialNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serialNumber, put = setStaticF_serialNumber)) uint64_t serialNumber;

  /// @brief Field unixEpoch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unixEpoch, put = setStaticF_unixEpoch))::System::DateTime unixEpoch;

  /// @brief Method CheckExpiration, addr 0x1700448, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::TimeSpan CheckExpiration(::System::Nullable_1<::System::TimeSpan> expiration);

  /// @brief Method CheckInitialized, addr 0x17001d0, size 0x70, virtual false, abstract: false, final false
  static inline void CheckInitialized();

  /// @brief Method GetJoinToken, addr 0x16ffb1c, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW GetJoinToken(::StringW fromUserUri, ::StringW conferenceUri, ::System::Nullable_1<::System::TimeSpan> expiration);

  /// @brief Method GetJoinToken, addr 0x16ffbec, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW GetJoinToken(::StringW issuer, ::StringW fromUserUri, ::StringW conferenceUri, ::System::TimeSpan expiration, ::StringW tokenSigningKey);

  /// @brief Method GetLoginToken, addr 0x16ff98c, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetLoginToken(::StringW fromUserUri, ::System::Nullable_1<::System::TimeSpan> expiration);

  /// @brief Method GetLoginToken, addr 0x16ffa58, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW GetLoginToken(::StringW issuer, ::StringW fromUserUri, ::System::TimeSpan expiration, ::StringW tokenSigningKey);

  /// @brief Method GetMuteForAllToken, addr 0x16ffcb4, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW GetMuteForAllToken(::StringW fromUserUri, ::StringW userUri, ::StringW conferenceUri, ::System::Nullable_1<::System::TimeSpan> expiration);

  /// @brief Method GetMuteForAllToken, addr 0x16ffd90, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW GetMuteForAllToken(::StringW issuer, ::StringW fromUserUri, ::StringW userUri, ::StringW conferenceUri, ::System::TimeSpan expiration, ::StringW tokenSigningKey);

  /// @brief Method GetToken, addr 0x16ffffc, size 0x1d4, virtual true, abstract: false, final false
  inline ::StringW GetToken(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW targetUserUri, ::StringW action, ::StringW tokenKey, ::StringW channelUri,
                            ::StringW fromUserUri);

  /// @brief Method GetTokenAsync, addr 0x1700240, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetTokenAsync(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW targetUserUri, ::StringW action,
                                                                      ::StringW tokenKey, ::StringW channelUri, ::StringW fromUserUri);

  /// @brief Method GetTranscriptionToken, addr 0x16ffe64, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW GetTranscriptionToken(::StringW fromUserUri, ::StringW conferenceUri, ::System::Nullable_1<::System::TimeSpan> expiration);

  /// @brief Method GetTranscriptionToken, addr 0x16fff34, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW GetTranscriptionToken(::StringW issuer, ::StringW fromUserUri, ::StringW conferenceUri, ::System::TimeSpan expiration, ::StringW tokenSigningKey);

  static inline ::Unity::Services::Vivox::VxTokenGen* New_ctor();

  /// @brief Method SecondsSinceUnixEpochPlusDuration, addr 0x170032c, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t SecondsSinceUnixEpochPlusDuration(::System::Nullable_1<::System::TimeSpan> duration);

  /// @brief Method .ctor, addr 0x16fdfc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_key();

  static inline uint64_t getStaticF_serialNumber();

  static inline ::System::DateTime getStaticF_unixEpoch();

  /// @brief Method get_IssuerKey, addr 0x16ff8d8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_IssuerKey();

  static inline void setStaticF_key(::StringW value);

  static inline void setStaticF_serialNumber(uint64_t value);

  static inline void setStaticF_unixEpoch(::System::DateTime value);

  /// @brief Method set_IssuerKey, addr 0x16ff930, size 0x5c, virtual false, abstract: false, final false
  inline void set_IssuerKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VxTokenGen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VxTokenGen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VxTokenGen(VxTokenGen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VxTokenGen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VxTokenGen(VxTokenGen const&) = delete;

  /// @brief Field k_defaultTokenExpirationInSeconds offset 0xffffffff size 0x4
  static constexpr int32_t k_defaultTokenExpirationInSeconds{ static_cast<int32_t>(0x5a) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VxTokenGen, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VxTokenGen);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VxTokenGen*, "Unity.Services.Vivox", "VxTokenGen");
