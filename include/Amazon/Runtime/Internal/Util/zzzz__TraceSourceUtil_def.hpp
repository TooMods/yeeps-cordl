#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TraceSourceUtil)
namespace System::Diagnostics {
struct SourceLevels;
}
namespace System::Diagnostics {
class TraceSource;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class TraceSourceUtil;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::TraceSourceUtil);
// Type: Amazon.Runtime.Internal.Util::TraceSourceUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::TraceSourceUtil*
class CORDL_TYPE TraceSourceUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTraceSource, addr 0x243e07c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceSource* GetTraceSource(::System::Type* targetType);

  /// @brief Method GetTraceSource, addr 0x243e5a4, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceSource* GetTraceSource(::System::Type* targetType, ::System::Diagnostics::SourceLevels sourceLevels);

  /// @brief Method GetTraceSourceWithListeners, addr 0x243e5d0, size 0x53c, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceSource* GetTraceSourceWithListeners(::StringW name, ::System::Diagnostics::SourceLevels sourceLevels);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceSourceUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceSourceUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceSourceUtil(TraceSourceUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceSourceUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceSourceUtil(TraceSourceUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::TraceSourceUtil, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::TraceSourceUtil);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::TraceSourceUtil*, "Amazon.Runtime.Internal.Util", "TraceSourceUtil");
