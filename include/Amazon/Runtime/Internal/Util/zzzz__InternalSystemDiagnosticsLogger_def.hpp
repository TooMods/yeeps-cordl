#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLogger_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalSystemDiagnosticsLogger)
namespace System::Diagnostics {
class TraceSource;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class InternalSystemDiagnosticsLogger;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::InternalSystemDiagnosticsLogger);
// Type: Amazon.Runtime.Internal.Util::InternalSystemDiagnosticsLogger
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::InternalSystemDiagnosticsLogger*
class CORDL_TYPE InternalSystemDiagnosticsLogger : public ::Amazon::Runtime::Internal::Util::InternalLogger {
public:
  // Declarations
  __declspec(property(get = get_IsDebugEnabled)) bool IsDebugEnabled;

  __declspec(property(get = get_IsErrorEnabled)) bool IsErrorEnabled;

  __declspec(property(get = get_IsInfoEnabled)) bool IsInfoEnabled;

  /// @brief Field eventId, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_eventId, put = __cordl_internal_set_eventId)) int32_t eventId;

  /// @brief Field trace, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_trace, put = __cordl_internal_set_trace))::System::Diagnostics::TraceSource* trace;

  /// @brief Method Debug, addr 0x243e244, size 0x170, virtual true, abstract: false, final false
  inline void Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DebugFormat, addr 0x243e3b4, size 0xe0, virtual true, abstract: false, final false
  inline void DebugFormat(::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Error, addr 0x243e098, size 0x170, virtual true, abstract: false, final false
  inline void Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Flush, addr 0x243e084, size 0x14, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method InfoFormat, addr 0x243e494, size 0xe0, virtual true, abstract: false, final false
  inline void InfoFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  static inline ::Amazon::Runtime::Internal::Util::InternalSystemDiagnosticsLogger* New_ctor(::System::Type* declaringType);

  constexpr int32_t const& __cordl_internal_get_eventId() const;

  constexpr int32_t& __cordl_internal_get_eventId();

  constexpr ::System::Diagnostics::TraceSource*& __cordl_internal_get_trace();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::TraceSource*> const& __cordl_internal_get_trace() const;

  constexpr void __cordl_internal_set_eventId(int32_t value);

  constexpr void __cordl_internal_set_trace(::System::Diagnostics::TraceSource* value);

  /// @brief Method .ctor, addr 0x243d4fc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* declaringType);

  /// @brief Method get_IsDebugEnabled, addr 0x243e574, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsDebugEnabled();

  /// @brief Method get_IsErrorEnabled, addr 0x243e584, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsErrorEnabled();

  /// @brief Method get_IsInfoEnabled, addr 0x243e594, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsInfoEnabled();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalSystemDiagnosticsLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalSystemDiagnosticsLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalSystemDiagnosticsLogger(InternalSystemDiagnosticsLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalSystemDiagnosticsLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalSystemDiagnosticsLogger(InternalSystemDiagnosticsLogger const&) = delete;

  /// @brief Field eventId, offset: 0x1c, size: 0x4, def value: None
  int32_t ___eventId;

  /// @brief Field trace, offset: 0x20, size: 0x8, def value: None
  ::System::Diagnostics::TraceSource* ___trace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::InternalSystemDiagnosticsLogger, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalSystemDiagnosticsLogger, ___eventId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalSystemDiagnosticsLogger, ___trace) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::InternalSystemDiagnosticsLogger);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::InternalSystemDiagnosticsLogger*, "Amazon.Runtime.Internal.Util", "InternalSystemDiagnosticsLogger");
