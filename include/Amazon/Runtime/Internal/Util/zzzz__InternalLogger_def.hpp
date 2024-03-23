#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InternalLogger)
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
class InternalLogger;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::InternalLogger);
// Type: Amazon.Runtime.Internal.Util::InternalLogger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::InternalLogger*
class CORDL_TYPE InternalLogger : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DeclaringType, put = set_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_IsDebugEnabled)) bool IsDebugEnabled;

  __declspec(property(get = get_IsEnabled, put = set_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsErrorEnabled)) bool IsErrorEnabled;

  __declspec(property(get = get_IsInfoEnabled)) bool IsInfoEnabled;

  /// @brief Field <DeclaringType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DeclaringType_k__BackingField, put = __cordl_internal_set__DeclaringType_k__BackingField))::System::Type* _DeclaringType_k__BackingField;

  /// @brief Field <IsEnabled>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__IsEnabled_k__BackingField, put = __cordl_internal_set__IsEnabled_k__BackingField)) bool _IsEnabled_k__BackingField;

  /// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DebugFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DebugFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Flush();

  /// @brief Method InfoFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InfoFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  static inline ::Amazon::Runtime::Internal::Util::InternalLogger* New_ctor(::System::Type* declaringType);

  constexpr ::System::Type*& __cordl_internal_get__DeclaringType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__DeclaringType_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsEnabled_k__BackingField();

  constexpr void __cordl_internal_set__DeclaringType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__IsEnabled_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x243c86c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* declaringType);

  /// @brief Method get_DeclaringType, addr 0x243e040, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_IsDebugEnabled, addr 0x243e06c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDebugEnabled();

  /// @brief Method get_IsEnabled, addr 0x243e050, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsEnabled();

  /// @brief Method get_IsErrorEnabled, addr 0x243e064, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsErrorEnabled();

  /// @brief Method get_IsInfoEnabled, addr 0x243e074, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsInfoEnabled();

  /// @brief Method set_DeclaringType, addr 0x243e048, size 0x8, virtual false, abstract: false, final false
  inline void set_DeclaringType(::System::Type* value);

  /// @brief Method set_IsEnabled, addr 0x243e058, size 0xc, virtual false, abstract: false, final false
  inline void set_IsEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalLogger(InternalLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalLogger(InternalLogger const&) = delete;

  /// @brief Field <DeclaringType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____DeclaringType_k__BackingField;

  /// @brief Field <IsEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::InternalLogger, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalLogger, ____DeclaringType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalLogger, ____IsEnabled_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::InternalLogger);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::InternalLogger*, "Amazon.Runtime.Internal.Util", "InternalLogger");
