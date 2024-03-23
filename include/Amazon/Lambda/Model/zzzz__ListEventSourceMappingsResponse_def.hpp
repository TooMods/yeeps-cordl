#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListEventSourceMappingsResponse)
namespace Amazon::Lambda::Model {
class EventSourceMappingConfiguration;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListEventSourceMappingsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListEventSourceMappingsResponse);
// Type: Amazon.Lambda.Model::ListEventSourceMappingsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListEventSourceMappingsResponse*
class CORDL_TYPE ListEventSourceMappingsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_EventSourceMappings,
                      put = set_EventSourceMappings))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* EventSourceMappings;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _eventSourceMappings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSourceMappings,
                      put = __cordl_internal_set__eventSourceMappings))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* _eventSourceMappings;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetEventSourceMappings, addr 0x2bcd7f8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetEventSourceMappings();

  /// @brief Method IsSetNextMarker, addr 0x2bcd85c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListEventSourceMappingsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>*& __cordl_internal_get__eventSourceMappings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>*> const&
  __cordl_internal_get__eventSourceMappings() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__eventSourceMappings(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bcd86c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EventSourceMappings, addr 0x2bcd7e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* get_EventSourceMappings();

  /// @brief Method get_NextMarker, addr 0x2bcd84c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_EventSourceMappings, addr 0x2bcd7f0, size 0x8, virtual false, abstract: false, final false
  inline void set_EventSourceMappings(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* value);

  /// @brief Method set_NextMarker, addr 0x2bcd854, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListEventSourceMappingsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListEventSourceMappingsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListEventSourceMappingsResponse(ListEventSourceMappingsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListEventSourceMappingsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListEventSourceMappingsResponse(ListEventSourceMappingsResponse const&) = delete;

  /// @brief Field _eventSourceMappings, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* ____eventSourceMappings;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListEventSourceMappingsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListEventSourceMappingsResponse, ____eventSourceMappings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListEventSourceMappingsResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListEventSourceMappingsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListEventSourceMappingsResponse*, "Amazon.Lambda.Model", "ListEventSourceMappingsResponse");
