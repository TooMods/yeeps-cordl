#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Timing)
namespace Amazon::Runtime {
class IMetricsTiming;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class Timing;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::Timing);
// Type: Amazon.Runtime.Internal.Util::Timing
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::Timing*
class CORDL_TYPE Timing : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ElapsedTicks)) int64_t ElapsedTicks;

  __declspec(property(get = get_ElapsedTime))::System::TimeSpan ElapsedTime;

  __declspec(property(get = get_IsFinished, put = set_IsFinished)) bool IsFinished;

  /// @brief Field <IsFinished>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsFinished_k__BackingField, put = __cordl_internal_set__IsFinished_k__BackingField)) bool _IsFinished_k__BackingField;

  /// @brief Field endTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_endTime, put = __cordl_internal_set_endTime)) int64_t endTime;

  /// @brief Field startTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_startTime, put = __cordl_internal_set_startTime)) int64_t startTime;

  /// @brief Convert operator to "::Amazon::Runtime::IMetricsTiming"
  constexpr operator ::Amazon::Runtime::IMetricsTiming*() noexcept;

  static inline ::Amazon::Runtime::Internal::Util::Timing* New_ctor();

  static inline ::Amazon::Runtime::Internal::Util::Timing* New_ctor(int64_t currentTime);

  /// @brief Method Stop, addr 0x24418e0, size 0x10, virtual false, abstract: false, final false
  inline void Stop(int64_t currentTime);

  constexpr bool const& __cordl_internal_get__IsFinished_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsFinished_k__BackingField();

  constexpr int64_t const& __cordl_internal_get_endTime() const;

  constexpr int64_t& __cordl_internal_get_endTime();

  constexpr int64_t const& __cordl_internal_get_startTime() const;

  constexpr int64_t& __cordl_internal_get_startTime();

  constexpr void __cordl_internal_set__IsFinished_k__BackingField(bool value);

  constexpr void __cordl_internal_set_endTime(int64_t value);

  constexpr void __cordl_internal_set_startTime(int64_t value);

  /// @brief Method .ctor, addr 0x24418bc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x24414b4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int64_t currentTime);

  /// @brief Method get_ElapsedTicks, addr 0x2443bd4, size 0x1c, virtual true, abstract: false, final true
  inline int64_t get_ElapsedTicks();

  /// @brief Method get_ElapsedTime, addr 0x2443bf0, size 0x70, virtual true, abstract: false, final true
  inline ::System::TimeSpan get_ElapsedTime();

  /// @brief Method get_IsFinished, addr 0x2443bc0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFinished();

  /// @brief Convert to "::Amazon::Runtime::IMetricsTiming"
  constexpr ::Amazon::Runtime::IMetricsTiming* i___Amazon__Runtime__IMetricsTiming() noexcept;

  /// @brief Method set_IsFinished, addr 0x2443bc8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsFinished(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Timing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Timing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Timing(Timing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Timing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Timing(Timing const&) = delete;

  /// @brief Field startTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___startTime;

  /// @brief Field endTime, offset: 0x18, size: 0x8, def value: None
  int64_t ___endTime;

  /// @brief Field <IsFinished>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsFinished_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::Timing, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::Timing, ___startTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::Timing, ___endTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::Timing, ____IsFinished_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::Timing);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::Timing*, "Amazon.Runtime.Internal.Util", "Timing");
