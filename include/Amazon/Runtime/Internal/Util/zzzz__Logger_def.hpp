#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal::Util {
class InternalLogger;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
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
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::Logger);
// Type: Amazon.Runtime.Internal.Util::Logger
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::Logger*
class CORDL_TYPE Logger : public ::System::Object {
public:
  // Declarations
  /// @brief Field cachedLoggers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedLoggers,
                             put = setStaticF_cachedLoggers))::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::Internal::Util::Logger*>* cachedLoggers;

  /// @brief Field emptyLogger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_emptyLogger, put = setStaticF_emptyLogger))::Amazon::Runtime::Internal::Util::Logger* emptyLogger;

  /// @brief Field loggers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loggers, put = __cordl_internal_set_loggers))::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::InternalLogger*>* loggers;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Util::ILogger"
  constexpr operator ::Amazon::Runtime::Internal::Util::ILogger*() noexcept;

  /// @brief Method ClearLoggerCache, addr 0x243d7fc, size 0x15c, virtual false, abstract: false, final false
  static inline void ClearLoggerCache();

  /// @brief Method ConfigsChanged, addr 0x243d780, size 0x7c, virtual false, abstract: false, final false
  inline void ConfigsChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e);

  /// @brief Method ConfigureLoggers, addr 0x243d53c, size 0x244, virtual false, abstract: false, final false
  inline void ConfigureLoggers();

  /// @brief Method Debug, addr 0x243dc8c, size 0x18c, virtual true, abstract: false, final true
  inline void Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DebugFormat, addr 0x243de18, size 0x17c, virtual true, abstract: false, final true
  inline void DebugFormat(::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Error, addr 0x243db00, size 0x18c, virtual true, abstract: false, final true
  inline void Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Flush, addr 0x243d9b0, size 0x150, virtual true, abstract: false, final true
  inline void Flush();

  /// @brief Method GetLogger, addr 0x2439cb8, size 0x304, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Util::Logger* GetLogger(::System::Type* type);

  /// @brief Method InfoFormat, addr 0x243c4e4, size 0x17c, virtual true, abstract: false, final true
  inline void InfoFormat(::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::Amazon::Runtime::Internal::Util::Logger* New_ctor();

  static inline ::Amazon::Runtime::Internal::Util::Logger* New_ctor(::System::Type* type);

  constexpr ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::InternalLogger*>*& __cordl_internal_get_loggers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::InternalLogger*>*> const& __cordl_internal_get_loggers() const;

  constexpr void __cordl_internal_set_loggers(::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::InternalLogger*>* value);

  /// @brief Method .ctor, addr 0x243cf30, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x243cfb0, size 0x2e8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::Internal::Util::Logger*>* getStaticF_cachedLoggers();

  static inline ::Amazon::Runtime::Internal::Util::Logger* getStaticF_emptyLogger();

  /// @brief Method get_EmptyLogger, addr 0x243d958, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Util::Logger* get_EmptyLogger();

  /// @brief Convert to "::Amazon::Runtime::Internal::Util::ILogger"
  constexpr ::Amazon::Runtime::Internal::Util::ILogger* i___Amazon__Runtime__Internal__Util__ILogger() noexcept;

  static inline void setStaticF_cachedLoggers(::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::Internal::Util::Logger*>* value);

  static inline void setStaticF_emptyLogger(::Amazon::Runtime::Internal::Util::Logger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Logger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Logger(Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Logger(Logger const&) = delete;

  /// @brief Field loggers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::InternalLogger*>* ___loggers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::Logger, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::Logger, ___loggers) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::Logger);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::Logger*, "Amazon.Runtime.Internal.Util", "Logger");
