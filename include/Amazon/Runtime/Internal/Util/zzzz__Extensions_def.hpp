#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::Extensions);
// Type: Amazon.Runtime.Internal.Util::Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::Extensions*
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field TickFrequency, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TickFrequency, put = setStaticF_TickFrequency)) double_t TickFrequency;

  /// @brief Field TicksPerSecond, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TicksPerSecond, put = setStaticF_TicksPerSecond)) int64_t TicksPerSecond;

  /// @brief Method GetElapsedDateTimeTicks, addr 0x24384c0, size 0x98, virtual false, abstract: false, final false
  static inline int64_t GetElapsedDateTimeTicks(::System::Diagnostics::Stopwatch* self);

  /// @brief Method HasRequestData, addr 0x2438558, size 0x1f0, virtual false, abstract: false, final false
  static inline bool HasRequestData(::Amazon::Runtime::Internal::IRequest* request);

  static inline double_t getStaticF_TickFrequency();

  static inline int64_t getStaticF_TicksPerSecond();

  static inline void setStaticF_TickFrequency(double_t value);

  static inline void setStaticF_TicksPerSecond(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::Extensions, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::Extensions*, "Amazon.Runtime.Internal.Util", "Extensions");
