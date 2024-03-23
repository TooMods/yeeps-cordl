#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Helper)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace Unity::Services::Vivox {
class vx_message_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class Helper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Helper);
// Type: Unity.Services.Vivox::Helper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::Helper*
class CORDL_TYPE Helper : public ::System::Object {
public:
  // Declarations
  /// @brief Field serialNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serialNumber, put = setStaticF_serialNumber)) uint64_t serialNumber;

  /// @brief Field unixEpoch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unixEpoch, put = setStaticF_unixEpoch))::System::DateTime unixEpoch;

  /// @brief Method CheckInitialized, addr 0x2fc6f3c, size 0x74, virtual false, abstract: false, final false
  static inline void CheckInitialized();

  /// @brief Method Clamp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Clamp(T val, T min, T max);

  /// @brief Method FixUriFromEditAndDeleteEvents, addr 0x2fc6fb0, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW FixUriFromEditAndDeleteEvents(::StringW uri);

  /// @brief Method GetRandomChannelUri, addr 0x2fc71f0, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW GetRandomChannelUri(::StringW prefix, ::StringW realm);

  /// @brief Method GetRandomUserId, addr 0x2fc70e0, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW GetRandomUserId(::StringW prefix);

  /// @brief Method GetRandomUserIdEx, addr 0x2fc7160, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW GetRandomUserIdEx(::StringW prefix, ::StringW issuer);

  /// @brief Method NextMessage, addr 0x2fc6eec, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_message_base_t* NextMessage();

  /// @brief Method NumberOfPages, addr 0x2fc73cc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t NumberOfPages(int32_t totalItems, int32_t pageSize);

  /// @brief Method TimeSinceUnixEpochPlusDuration, addr 0x2fc7280, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::TimeSpan TimeSinceUnixEpochPlusDuration(::System::TimeSpan duration);

  /// @brief Method ToUtcUnixTimeInSeconds, addr 0x2fc733c, size 0x34, virtual false, abstract: false, final false
  static inline int64_t ToUtcUnixTimeInSeconds(::System::DateTime dateTime);

  /// @brief Method UnixTimeStampToDateTime, addr 0x2fc7370, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::DateTime UnixTimeStampToDateTime(int64_t unixTimeStamp);

  static inline uint64_t getStaticF_serialNumber();

  static inline ::System::DateTime getStaticF_unixEpoch();

  static inline void setStaticF_serialNumber(uint64_t value);

  static inline void setStaticF_unixEpoch(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Helper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Helper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Helper(Helper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Helper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Helper(Helper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Helper, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::Helper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Helper*, "Unity.Services.Vivox", "Helper");
