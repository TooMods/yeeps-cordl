#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/zzzz__LogMetricsFormatOption_def.hpp"
#include "Amazon/zzzz__LoggingOptions_def.hpp"
#include "Amazon/zzzz__ResponseLoggingOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoggingConfig)
namespace Amazon::Runtime {
class IMetricsFormatter;
}
namespace Amazon {
struct LogMetricsFormatOption;
}
namespace Amazon {
struct LoggingOptions;
}
namespace Amazon {
struct ResponseLoggingOption;
}
// Forward declare root types
namespace Amazon::Util {
class LoggingConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::LoggingConfig);
// Type: Amazon.Util::LoggingConfig
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::LoggingConfig*
class CORDL_TYPE LoggingConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field DefaultLogResponsesSizeLimit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DefaultLogResponsesSizeLimit, put = setStaticF_DefaultLogResponsesSizeLimit)) int32_t DefaultLogResponsesSizeLimit;

  __declspec(property(get = get_LogMetrics, put = set_LogMetrics)) bool LogMetrics;

  __declspec(property(get = get_LogMetricsCustomFormatter, put = set_LogMetricsCustomFormatter))::Amazon::Runtime::IMetricsFormatter* LogMetricsCustomFormatter;

  __declspec(property(get = get_LogMetricsFormat, put = set_LogMetricsFormat))::Amazon::LogMetricsFormatOption LogMetricsFormat;

  __declspec(property(get = get_LogResponses, put = set_LogResponses))::Amazon::ResponseLoggingOption LogResponses;

  __declspec(property(get = get_LogResponsesSizeLimit, put = set_LogResponsesSizeLimit)) int32_t LogResponsesSizeLimit;

  __declspec(property(get = get_LogTo, put = set_LogTo))::Amazon::LoggingOptions LogTo;

  /// @brief Field <LogMetricsCustomFormatter>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__LogMetricsCustomFormatter_k__BackingField,
                      put = __cordl_internal_set__LogMetricsCustomFormatter_k__BackingField))::Amazon::Runtime::IMetricsFormatter* _LogMetricsCustomFormatter_k__BackingField;

  /// @brief Field <LogMetricsFormat>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__LogMetricsFormat_k__BackingField,
                      put = __cordl_internal_set__LogMetricsFormat_k__BackingField))::Amazon::LogMetricsFormatOption _LogMetricsFormat_k__BackingField;

  /// @brief Field <LogMetrics>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__LogMetrics_k__BackingField, put = __cordl_internal_set__LogMetrics_k__BackingField)) bool _LogMetrics_k__BackingField;

  /// @brief Field <LogResponsesSizeLimit>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__LogResponsesSizeLimit_k__BackingField,
                      put = __cordl_internal_set__LogResponsesSizeLimit_k__BackingField)) int32_t _LogResponsesSizeLimit_k__BackingField;

  /// @brief Field <LogResponses>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__LogResponses_k__BackingField, put = __cordl_internal_set__LogResponses_k__BackingField))::Amazon::ResponseLoggingOption _LogResponses_k__BackingField;

  /// @brief Field _logTo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__logTo, put = __cordl_internal_set__logTo))::Amazon::LoggingOptions _logTo;

  static inline ::Amazon::Util::LoggingConfig* New_ctor();

  constexpr ::Amazon::Runtime::IMetricsFormatter*& __cordl_internal_get__LogMetricsCustomFormatter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IMetricsFormatter*> const& __cordl_internal_get__LogMetricsCustomFormatter_k__BackingField() const;

  constexpr ::Amazon::LogMetricsFormatOption const& __cordl_internal_get__LogMetricsFormat_k__BackingField() const;

  constexpr ::Amazon::LogMetricsFormatOption& __cordl_internal_get__LogMetricsFormat_k__BackingField();

  constexpr bool const& __cordl_internal_get__LogMetrics_k__BackingField() const;

  constexpr bool& __cordl_internal_get__LogMetrics_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LogResponsesSizeLimit_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LogResponsesSizeLimit_k__BackingField();

  constexpr ::Amazon::ResponseLoggingOption const& __cordl_internal_get__LogResponses_k__BackingField() const;

  constexpr ::Amazon::ResponseLoggingOption& __cordl_internal_get__LogResponses_k__BackingField();

  constexpr ::Amazon::LoggingOptions const& __cordl_internal_get__logTo() const;

  constexpr ::Amazon::LoggingOptions& __cordl_internal_get__logTo();

  constexpr void __cordl_internal_set__LogMetricsCustomFormatter_k__BackingField(::Amazon::Runtime::IMetricsFormatter* value);

  constexpr void __cordl_internal_set__LogMetricsFormat_k__BackingField(::Amazon::LogMetricsFormatOption value);

  constexpr void __cordl_internal_set__LogMetrics_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LogResponsesSizeLimit_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LogResponses_k__BackingField(::Amazon::ResponseLoggingOption value);

  constexpr void __cordl_internal_set__logTo(::Amazon::LoggingOptions value);

  /// @brief Method .ctor, addr 0x21fcca0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_DefaultLogResponsesSizeLimit();

  /// @brief Method get_LogMetrics, addr 0x21fcc6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_LogMetrics();

  /// @brief Method get_LogMetricsCustomFormatter, addr 0x21fcc90, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::IMetricsFormatter* get_LogMetricsCustomFormatter();

  /// @brief Method get_LogMetricsFormat, addr 0x21fcc80, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::LogMetricsFormatOption get_LogMetricsFormat();

  /// @brief Method get_LogResponses, addr 0x21fcc4c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::ResponseLoggingOption get_LogResponses();

  /// @brief Method get_LogResponsesSizeLimit, addr 0x21fcc5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LogResponsesSizeLimit();

  /// @brief Method get_LogTo, addr 0x21fcc44, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::LoggingOptions get_LogTo();

  static inline void setStaticF_DefaultLogResponsesSizeLimit(int32_t value);

  /// @brief Method set_LogMetrics, addr 0x21fcc74, size 0xc, virtual false, abstract: false, final false
  inline void set_LogMetrics(bool value);

  /// @brief Method set_LogMetricsCustomFormatter, addr 0x21fcc98, size 0x8, virtual false, abstract: false, final false
  inline void set_LogMetricsCustomFormatter(::Amazon::Runtime::IMetricsFormatter* value);

  /// @brief Method set_LogMetricsFormat, addr 0x21fcc88, size 0x8, virtual false, abstract: false, final false
  inline void set_LogMetricsFormat(::Amazon::LogMetricsFormatOption value);

  /// @brief Method set_LogResponses, addr 0x21fcc54, size 0x8, virtual false, abstract: false, final false
  inline void set_LogResponses(::Amazon::ResponseLoggingOption value);

  /// @brief Method set_LogResponsesSizeLimit, addr 0x21fcc64, size 0x8, virtual false, abstract: false, final false
  inline void set_LogResponsesSizeLimit(int32_t value);

  /// @brief Method set_LogTo, addr 0x21f2044, size 0x78, virtual false, abstract: false, final false
  inline void set_LogTo(::Amazon::LoggingOptions value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoggingConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoggingConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoggingConfig(LoggingConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoggingConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoggingConfig(LoggingConfig const&) = delete;

  /// @brief Field _logTo, offset: 0x10, size: 0x4, def value: None
  ::Amazon::LoggingOptions ____logTo;

  /// @brief Field <LogResponses>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::Amazon::ResponseLoggingOption ____LogResponses_k__BackingField;

  /// @brief Field <LogResponsesSizeLimit>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____LogResponsesSizeLimit_k__BackingField;

  /// @brief Field <LogMetrics>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____LogMetrics_k__BackingField;

  /// @brief Field <LogMetricsFormat>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::Amazon::LogMetricsFormatOption ____LogMetricsFormat_k__BackingField;

  /// @brief Field <LogMetricsCustomFormatter>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IMetricsFormatter* ____LogMetricsCustomFormatter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::LoggingConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::LoggingConfig, ____logTo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::LoggingConfig, ____LogResponses_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::LoggingConfig, ____LogResponsesSizeLimit_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::LoggingConfig, ____LogMetrics_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::LoggingConfig, ____LogMetricsFormat_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::LoggingConfig, ____LogMetricsCustomFormatter_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::LoggingConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::LoggingConfig*, "Amazon.Util", "LoggingConfig");
