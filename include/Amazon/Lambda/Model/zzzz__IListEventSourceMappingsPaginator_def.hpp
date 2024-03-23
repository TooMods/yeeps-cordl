#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListEventSourceMappingsPaginator)
namespace Amazon::Lambda::Model {
class EventSourceMappingConfiguration;
}
namespace Amazon::Lambda::Model {
class ListEventSourceMappingsResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListEventSourceMappingsPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListEventSourceMappingsPaginator);
// Type: Amazon.Lambda.Model::IListEventSourceMappingsPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListEventSourceMappingsPaginator*
class CORDL_TYPE IListEventSourceMappingsPaginator {
public:
  // Declarations
  __declspec(property(get = get_EventSourceMappings))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* EventSourceMappings;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListEventSourceMappingsResponse*>* Responses;

  /// @brief Method get_EventSourceMappings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* get_EventSourceMappings();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListEventSourceMappingsResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListEventSourceMappingsPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListEventSourceMappingsPaginator(IListEventSourceMappingsPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListEventSourceMappingsPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListEventSourceMappingsPaginator(IListEventSourceMappingsPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListEventSourceMappingsPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*, "Amazon.Lambda.Model", "IListEventSourceMappingsPaginator");
