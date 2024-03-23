#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PipelineHandler)
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IPipelineHandler;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class PipelineHandler;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::PipelineHandler);
// Type: Amazon.Runtime.Internal::PipelineHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::PipelineHandler*
class CORDL_TYPE PipelineHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InnerHandler, put = set_InnerHandler))::Amazon::Runtime::IPipelineHandler* InnerHandler;

  __declspec(property(get = get_Logger, put = set_Logger))::Amazon::Runtime::Internal::Util::ILogger* Logger;

  __declspec(property(get = get_OuterHandler, put = set_OuterHandler))::Amazon::Runtime::IPipelineHandler* OuterHandler;

  /// @brief Field <InnerHandler>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__InnerHandler_k__BackingField,
                      put = __cordl_internal_set__InnerHandler_k__BackingField))::Amazon::Runtime::IPipelineHandler* _InnerHandler_k__BackingField;

  /// @brief Field <Logger>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Logger_k__BackingField, put = __cordl_internal_set__Logger_k__BackingField))::Amazon::Runtime::Internal::Util::ILogger* _Logger_k__BackingField;

  /// @brief Field <OuterHandler>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__OuterHandler_k__BackingField,
                      put = __cordl_internal_set__OuterHandler_k__BackingField))::Amazon::Runtime::IPipelineHandler* _OuterHandler_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::IPipelineHandler"
  constexpr operator ::Amazon::Runtime::IPipelineHandler*() noexcept;

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23dd3d4, size 0xf4, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method LogMetrics, addr 0x23e9f20, size 0x46c, virtual false, abstract: false, final false
  inline void LogMetrics(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::PipelineHandler* New_ctor();

  constexpr ::Amazon::Runtime::IPipelineHandler*& __cordl_internal_get__InnerHandler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPipelineHandler*> const& __cordl_internal_get__InnerHandler_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::ILogger*& __cordl_internal_get__Logger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& __cordl_internal_get__Logger_k__BackingField() const;

  constexpr ::Amazon::Runtime::IPipelineHandler*& __cordl_internal_get__OuterHandler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPipelineHandler*> const& __cordl_internal_get__OuterHandler_k__BackingField() const;

  constexpr void __cordl_internal_set__InnerHandler_k__BackingField(::Amazon::Runtime::IPipelineHandler* value);

  constexpr void __cordl_internal_set__Logger_k__BackingField(::Amazon::Runtime::Internal::Util::ILogger* value);

  constexpr void __cordl_internal_set__OuterHandler_k__BackingField(::Amazon::Runtime::IPipelineHandler* value);

  /// @brief Method .ctor, addr 0x23dd258, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InnerHandler, addr 0x23e9f00, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPipelineHandler* get_InnerHandler();

  /// @brief Method get_Logger, addr 0x23e9ef0, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::ILogger* get_Logger();

  /// @brief Method get_OuterHandler, addr 0x23e9f10, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPipelineHandler* get_OuterHandler();

  /// @brief Convert to "::Amazon::Runtime::IPipelineHandler"
  constexpr ::Amazon::Runtime::IPipelineHandler* i___Amazon__Runtime__IPipelineHandler() noexcept;

  /// @brief Method set_InnerHandler, addr 0x23e9f08, size 0x8, virtual true, abstract: false, final true
  inline void set_InnerHandler(::Amazon::Runtime::IPipelineHandler* value);

  /// @brief Method set_Logger, addr 0x23e9ef8, size 0x8, virtual true, abstract: false, final false
  inline void set_Logger(::Amazon::Runtime::Internal::Util::ILogger* value);

  /// @brief Method set_OuterHandler, addr 0x23e9f18, size 0x8, virtual true, abstract: false, final true
  inline void set_OuterHandler(::Amazon::Runtime::IPipelineHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PipelineHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PipelineHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PipelineHandler(PipelineHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PipelineHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PipelineHandler(PipelineHandler const&) = delete;

  /// @brief Field <Logger>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ILogger* ____Logger_k__BackingField;

  /// @brief Field <InnerHandler>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::IPipelineHandler* ____InnerHandler_k__BackingField;

  /// @brief Field <OuterHandler>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IPipelineHandler* ____OuterHandler_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::PipelineHandler, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::PipelineHandler, ____Logger_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::PipelineHandler, ____InnerHandler_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::PipelineHandler, ____OuterHandler_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::PipelineHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::PipelineHandler*, "Amazon.Runtime.Internal", "PipelineHandler");
