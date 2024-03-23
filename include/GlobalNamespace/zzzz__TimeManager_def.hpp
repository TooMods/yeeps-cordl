#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeManager)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeManager);
// Type: ::TimeManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimeManager*
class CORDL_TYPE TimeManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field serverTimeOffset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serverTimeOffset, put = setStaticF_serverTimeOffset))::System::TimeSpan serverTimeOffset;

  /// @brief Method GetMinDate, addr 0xf2b3e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::DateTime GetMinDate();

  /// @brief Method GetNextWeekdayAtSameTime, addr 0xf2b278, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime GetNextWeekdayAtSameTime(::System::DateTime start, ::System::DayOfWeek day);

  /// @brief Method GetPreviousWeekdayAtSameTime, addr 0xf2b2dc, size 0x48, virtual false, abstract: false, final false
  static inline ::System::DateTime GetPreviousWeekdayAtSameTime(::System::DateTime start, ::System::DayOfWeek day);

  /// @brief Method GetStandardCountdownString, addr 0xf2b424, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetStandardCountdownString(::System::TimeSpan timeUntilNextRotation);

  /// @brief Method GetSyncedUTCNow, addr 0xf21f50, size 0x94, virtual false, abstract: false, final false
  static inline ::System::DateTime GetSyncedUTCNow();

  /// @brief Method IsOnSameDay, addr 0xf2b324, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsOnSameDay(::System::DateTime a, ::System::DateTime b, int32_t hourOffset);

  /// @brief Method SetServerTime, addr 0xf2b0a0, size 0x138, virtual false, abstract: false, final false
  static inline void SetServerTime(::System::DateTime serverTime);

  /// @brief Method ToDate, addr 0xf2b228, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW ToDate(::System::DateTime dateTime);

  /// @brief Method ToShortDateNoTime, addr 0xf2b1d8, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW ToShortDateNoTime(::System::DateTime dateTime);

  /// @brief Method ToString, addr 0xf22840, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime dateTime);

  /// @brief Method TryManualParseToUTC, addr 0xf2adec, size 0x2b4, virtual false, abstract: false, final false
  static inline bool TryManualParseToUTC(::StringW str, ::System::Globalization::CultureInfo* culture, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTime> utcTime);

  /// @brief Method TryParseUTCTimestsamp, addr 0xf21e98, size 0xb8, virtual false, abstract: false, final false
  static inline bool TryParseUTCTimestsamp(::StringW timestampStr, ByRef<::System::DateTime> dateTime);

  static inline ::System::TimeSpan getStaticF_serverTimeOffset();

  static inline void setStaticF_serverTimeOffset(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeManager(TimeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeManager(TimeManager const&) = delete;

  /// @brief Field DATETIME_FORMAT offset 0xffffffff size 0x8
  static constexpr ::ConstString DATETIME_FORMAT{ u"yyyy MM/dd HH:mm:ss" };

  /// @brief Field MAX_OFFSET offset 0xffffffff size 0x4
  static constexpr float_t MAX_OFFSET{ 3.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeManager*, "", "TimeManager");
