#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LogMessage)
namespace Amazon::Runtime {
class ILogMessage;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class LogMessage;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::LogMessage);
// Type: Amazon.Runtime.Internal.Util::LogMessage
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::LogMessage*
class CORDL_TYPE LogMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Args, put = set_Args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_Format, put = set_Format))::StringW Format;

  __declspec(property(get = get_Provider, put = set_Provider))::System::IFormatProvider* Provider;

  /// @brief Field <Args>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Args_k__BackingField,
                      put = __cordl_internal_set__Args_k__BackingField))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _Args_k__BackingField;

  /// @brief Field <Format>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Format_k__BackingField, put = __cordl_internal_set__Format_k__BackingField))::StringW _Format_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Provider_k__BackingField, put = __cordl_internal_set__Provider_k__BackingField))::System::IFormatProvider* _Provider_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::ILogMessage"
  constexpr operator ::Amazon::Runtime::ILogMessage*() noexcept;

  static inline ::Amazon::Runtime::Internal::Util::LogMessage* New_ctor(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::Amazon::Runtime::Internal::Util::LogMessage* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::Internal::Util::LogMessage* New_ctor(::System::IFormatProvider* provider, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method ToString, addr 0x2440b30, size 0x14, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__Args_k__BackingField() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__Args_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Format_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Format_k__BackingField();

  constexpr ::System::IFormatProvider*& __cordl_internal_get__Provider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::IFormatProvider*> const& __cordl_internal_get__Provider_k__BackingField() const;

  constexpr void __cordl_internal_set__Args_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__Format_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Provider_k__BackingField(::System::IFormatProvider* value);

  /// @brief Method .ctor, addr 0x2440ab0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method .ctor, addr 0x24409d4, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x243e208, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::IFormatProvider* provider, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method get_Args, addr 0x24409a4, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_Format, addr 0x24409c4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Format();

  /// @brief Method get_Provider, addr 0x24409b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::IFormatProvider* get_Provider();

  /// @brief Convert to "::Amazon::Runtime::ILogMessage"
  constexpr ::Amazon::Runtime::ILogMessage* i___Amazon__Runtime__ILogMessage() noexcept;

  /// @brief Method set_Args, addr 0x24409ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_Format, addr 0x24409cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::StringW value);

  /// @brief Method set_Provider, addr 0x24409bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Provider(::System::IFormatProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogMessage(LogMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogMessage(LogMessage const&) = delete;

  /// @brief Field <Args>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____Args_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::IFormatProvider* ____Provider_k__BackingField;

  /// @brief Field <Format>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Format_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::LogMessage, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::LogMessage, ____Args_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::LogMessage, ____Provider_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::LogMessage, ____Format_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::LogMessage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::LogMessage*, "Amazon.Runtime.Internal.Util", "LogMessage");
