#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__Metric_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MetricError)
namespace Amazon::Runtime {
struct Metric;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class MetricError;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::MetricError);
// Type: Amazon.Runtime.Internal.Util::MetricError
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::MetricError*
class CORDL_TYPE MetricError : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Exception, put = set_Exception))::System::Exception* Exception;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  __declspec(property(get = get_Metric, put = set_Metric))::Amazon::Runtime::Metric Metric;

  __declspec(property(get = get_Time, put = set_Time))::System::DateTime Time;

  /// @brief Field <Exception>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Exception_k__BackingField, put = __cordl_internal_set__Exception_k__BackingField))::System::Exception* _Exception_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  /// @brief Field <Metric>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Metric_k__BackingField, put = __cordl_internal_set__Metric_k__BackingField))::Amazon::Runtime::Metric _Metric_k__BackingField;

  /// @brief Field <Time>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Time_k__BackingField, put = __cordl_internal_set__Time_k__BackingField))::System::DateTime _Time_k__BackingField;

  static inline ::Amazon::Runtime::Internal::Util::MetricError* New_ctor(::Amazon::Runtime::Metric metric, ::System::Exception* exception, ::StringW messageFormat,
                                                                         ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::Amazon::Runtime::Internal::Util::MetricError* New_ctor(::Amazon::Runtime::Metric metric, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  constexpr ::System::Exception*& __cordl_internal_get__Exception_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__Exception_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::Amazon::Runtime::Metric const& __cordl_internal_get__Metric_k__BackingField() const;

  constexpr ::Amazon::Runtime::Metric& __cordl_internal_get__Metric_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__Time_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__Time_k__BackingField();

  constexpr void __cordl_internal_set__Exception_k__BackingField(::System::Exception* value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Metric_k__BackingField(::Amazon::Runtime::Metric value);

  constexpr void __cordl_internal_set__Time_k__BackingField(::System::DateTime value);

  /// @brief Method .ctor, addr 0x2443de4, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Metric metric, ::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method .ctor, addr 0x2440ca0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Metric metric, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method get_Exception, addr 0x2443dc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_Message, addr 0x2443db4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_Metric, addr 0x2443da4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Metric get_Metric();

  /// @brief Method get_Time, addr 0x2443dd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Time();

  /// @brief Method set_Exception, addr 0x2443dcc, size 0x8, virtual false, abstract: false, final false
  inline void set_Exception(::System::Exception* value);

  /// @brief Method set_Message, addr 0x2443dbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_Metric, addr 0x2443dac, size 0x8, virtual false, abstract: false, final false
  inline void set_Metric(::Amazon::Runtime::Metric value);

  /// @brief Method set_Time, addr 0x2443ddc, size 0x8, virtual false, abstract: false, final false
  inline void set_Time(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetricError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetricError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetricError(MetricError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetricError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetricError(MetricError const&) = delete;

  /// @brief Field <Metric>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Amazon::Runtime::Metric ____Metric_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <Exception>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Exception* ____Exception_k__BackingField;

  /// @brief Field <Time>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____Time_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::MetricError, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::MetricError, ____Metric_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::MetricError, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::MetricError, ____Exception_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::MetricError, ____Time_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::MetricError);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::MetricError*, "Amazon.Runtime.Internal.Util", "MetricError");
